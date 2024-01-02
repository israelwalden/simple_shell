#include "main.h"
/**
 * _getline - gets line from input strean
 * @lineptr: pointer to char pointer
 * @n: pointer to size_t of buffer
 * @fd: FILE descriptor
 * Return: -1 or 0 on failure else succes
 */
#define BUFFSIZE 1024

size_t _getline(char **lineptr, size_t n, FILE fd)
{
	char buffer[BUFFSIZE];
	size_t n_rd;
	
	/*read buffer */


	/*read exception handling*/
	if(n_rd <= 0)
	{
		return (0);
	}

	/*save to lineptr*/
	write(STDOUT_FILENO, &buffer, n_rd);

	/*getline exception handling*/
	if(lineptr == NULL | n = NULL)
	{
		return (-1);
	}
	return (n_rd);
}
