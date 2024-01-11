#include "main.h"
/**
 * _getenv - print env varibles
 * @envar: environment varible array;
 * @var_names: varibles to get
 */
void _getenv(char **envar, char **var_names)
{
	int i = 0;
	char nl = '\n';

	if (var_names == NULL)
	{
		while (envar[i])
		{
			write(1, envar[i], _strlen(envar[i]));
			write(1, &nl, 1);
			i++;
		}
		prompt(envar);
	}

	while (var_names[i])
	{
		int j = 0;

		while (envar[j])
		{
			if (_strncmp(var_names[i], envar[j], _strlen(var_names[i])) == 0)
			{
				write(1, envar[j], _strlen(envar[j]));
				write(1, &nl, 1);
				/*printf("%s\n",envar[j]);*/
				break;
			}
			j++;
		}
		i++;
	}
	prompt(envar);
}
