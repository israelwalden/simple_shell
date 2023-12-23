#include "main.h"
/**
 * rm_end_slash - remove ending slash
 * @tok: char pointer to string
 */
void rm_end_slash(char *tok)
{
	char *str = tok;

	while (*str != '\0')
	{
		str++;
	}
	while (str > tok && *(str - 1) == '/')
	{
		str--;
	}
	*str = '\0';
}
