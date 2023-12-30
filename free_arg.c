#include "main.h"

/**
 * free_arg - free argv **
 * @argv: ** argv to free
 */
void free_arg(char **argv)
{
	int i = 0;

	while (argv[i] != NULL)
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}
