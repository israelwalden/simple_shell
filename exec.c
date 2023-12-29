#include "main.h"
/**
 * execute -executes commands
 * @tok_commands: ** args
 * Return: 0
 */

void execute(char **tok_commands)
{
	if (execve(tok_commands[0], tok_commands, NULL))
	{
		perror("execution");
		exit(EXIT_FAILURE);
	}

}
