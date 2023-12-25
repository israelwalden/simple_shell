#include "main.h"
/**
 * rm_end_slash - remove ending slash
 * @tok: char pointer to string
 */
void rm_end_slash(char *tok)
{
	int i = 0;

	while (tok[i] != '\0')
	{
		i++;
	}
	while (i > 0 && tok[i - 1] == '/')
	{
		tok[--i] = '\0';
	}
}
