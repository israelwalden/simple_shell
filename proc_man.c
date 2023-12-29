#include "main.h"
/**
 * proc_man - manages forking and waiting
 * @tok_commands: ** commands
 */
void proc_man(char **tok_commands)
{
	pid_t child = fork();
	int status;

	if (child == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (child == 0)
	{
		execute(tok_commands);
	}

	else
	{
		wait(&status);
	}
}
