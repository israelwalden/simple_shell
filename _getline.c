#include "main.h"
/**
 * _getline - gets line from input strean
 * @lineptr: pointer to char pointer
 * @n: pointer to size_t of buffer
 * @stream: FILE descriptor
 * Return: -1 or 0 on failure else succes
 */

ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	char buffer[BUFFSIZE];
	size_t n_rd = 0;
	char *nl = NULL;
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
		strcpy(*lineptr, buffer);
	}
	else
	{
		if ((n_rd) != *n)
		{
			free(*lineptr);
			lineptr = malloc((n_rd + 1) * sizeof(char));
			if (*lineptr == NULL)
				return (-1);
			strcpy(*lineptr, buffer);
		}
		else
		{
			lineptr = malloc((n_rd + 1) * sizeof(char));
			if (*lineptr == NULL)
				return (-1);

			strcpy(*lineptr, buffer);
		}
	}
	/* swap endling newline with '\0'*/
	nl = _strchr(*lineptr, '\n');
	if (nl != NULL)
		*nl = '\0';
	return (n_rd);
}
