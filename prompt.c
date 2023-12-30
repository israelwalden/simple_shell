#include "main.h"
/**
 * prompt - print $ and waits for user input
 */
void prompt(void)
{
	char *p = "$ ";
	char *user_input;
	char *delim = " \n\t";
	size_t len = 0;
	int n_read;
	char **argv;


	while (1)
	{
		write(1, p, strlen(p));
		n_read = getline(&user_input, &len, stdin);
		/*handle geline error*/
		if (n_read == -1)
		{
			free(user_input);
			perror("getline");
			exit(1);
		}
		argv = tokenize_input(user_input, delim);
		/*argv[0] = get_com_path(argv[0]);*/
		if (argv == NULL)
		{
			perror("tokenization");
			exit(1);
		}		
		proc_man(argv);
		free_arg(argv);
	}
}
