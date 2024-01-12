#include "main.h"
/**
 * prompt - print $ and waits for user input
 * @env: environment varible
 */
void prompt(char **env)
{
	char *p = "$ ";
	char *ext = "exit";
	char *user_input;
	char *delim = " \n\t";
	size_t len = 0;
	int n_read = 0;
	char **argv = NULL;


	while (1)
	{
		write(1, p, strlen(p));
		n_read = getline(&user_input, &len, stdin);
		/*handle geline error*/
		if (n_read == -1)
		{
			free(user_input);
			free_arg(argv);
			/*perror("getline");*/
			exit(1);
		}
		argv = tokenize_input(user_input, delim);
		argv[0] = get_com_path(argv[0], env);
		if (argv == NULL)
		{
			free_arg(argv);
			free(user_input);
			len = 0;
			user_input = NULL;
			perror("tokenization");
			exit(1);
		}
		if (_strcmp(argv[0], ext) == 0)
		{
			free(user_input);
			user_input = NULL;
			len = 0;
			free_arg(argv);
			_exit(EXIT_SUCCESS);
		}
		proc_man(argv);
		free_arg(argv);
	}
}
