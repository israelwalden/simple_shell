#include "main.h"
/**
 * get_com_path - gets the path to the command
 * @arg: string
 * Return: char pointer to command string
 */
char *get_com_path(char *arg)
{
	shell_commands com_path[] = {
	{"l", "/bin/ls"},
	{"ls", "/bin/ls"},
	{"exit", "/bin/exit"},
	{"echo", "/bin/echo"},
	{NULL, NULL}
	};
	int i = 0;

	if (arg[0] != '/')
	{
		while (com_path[i].c != NULL)
		{
			if (_strcmp(com_path[i].c, arg) == 0)
			{
				free(arg);
				arg = com_path[i].file_path;
				return (arg);
			}
			i++;
		}

	}
	return (arg);
}
