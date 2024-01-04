#include "main.h"
/**
 * _getline - gets line from input strean
 * @lineptr: pointer to char pointer
 * @n: pointer to size_t of buffer
 * @stream: FILE descriptor
 * Return: -1 or 0 on failure else succes
 */

size_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	char buffer[BUFFSIZE];
	size_t n_rd;
	(void)stream;
	/*read buffer */
	n_rd = read(0, buffer, BUFFSIZE);

	/*read exception handling*/
	if (n_rd <= 0)
	{
		return (-1);
	}

	/*argument exception handling*/
	if (lineptr == NULL || n == NULL)
		return (-1);

	if (*lineptr == NULL || *n == 0)
	{
		/* allocate men for lineptr*/
		*lineptr = malloc((n_rd + 1) * sizeof(char));
		if (*lineptr == NULL)
			return (-1);
		_strcpy(*lineptr, buffer);
	}
	else
	{
		if ((n_rd + 1) != *n)
		{
			free(*lineptr);
			lineptr = malloc((n_rd + 1) * sizeof(char));
			_strcpy(*lineptr, buffer);
		}
		else
		{
			lineptr = malloc((n_rd + 1) * sizeof(char));
			_strcpy(*lineptr, buffer);
		}
	}

	return (n_rd);
}
