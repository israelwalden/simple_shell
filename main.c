#include "main.h"
/**
 * main - entry into shell program
 * Return:  always 0;
 */
int main(void)
{
	char delim = ' ', prompt[] = "$ ";
	char *user_input = NULL;
	size_t inp_size = 0, inp_len;
	char **command;
	int f;

	/***************************************************/
	while (1)
	{
		write(1, prompt, sizeof(prompt) - 1);

		/*getline(&user_input, &len, stdin);*/
		inp_len = getline(&user_input, &inp_size, stdin);
		if (!inp_len)
		{
			free(user_input);
			perror("no input");
		}
		command = tokenize_input(user_input, &delim);

		for (f = 0; command[f]; f++)
		{
			printf("%s\n", command[f]);
		}

		if (execve(command[0], command, NULL) == -1)
		{
			perror("execve");
		}

		for (f = 0; command[f]; f++)
		{
			free(command[f]);
		}
		free(command);



	}
	return (0);
}


