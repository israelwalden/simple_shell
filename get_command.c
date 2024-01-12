#include "main.h"
/**
 * get_com_path - gets the path to the command
 * @arg: string
 * @envar: environment varibles
 * Return: char pointer to command string
 */
char *get_com_path(char *arg, char **envar)
{
	char *var_names[] = {"HOST","LANGUAGE","PWD","TZ","HOME","LANG","SHLVL","LC_ALL","PATH","OLDPWD"};

	shell_commands com_path[] = {
	{"l", "/bin/ls"},
	{"ls", "/bin/ls"},
	{"cat", "/bin/cat"},
	{"echo", "/bin/echo"},
	{NULL, NULL}
	};
	int i = 0;
	char *env = "env";
	char *ext = "exit";

	if (_strcmp(arg, ext) == 0)
	{
		return (arg);
	}

	if (_strcmp(arg, env) == 0)
	{
	_getenv(envar, var_names);
	exit(EXIT_SUCCESS);
	}

	if (arg[0] != '/')
	{
		while (com_path[i].c != NULL)
		{
			if (_strcmp(com_path[i].c, arg) == 0)
			{
				free(arg);
				arg = malloc(_strlen(com_path[i].file_path) + 1);
				_strcpy(arg, com_path[i].file_path);
				return (arg);
			}
			i++;
		}

	}
	return (arg);
}
