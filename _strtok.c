#include "main.h"

/**
 * _strtok - tokenize string
 * @str: string to br tokenized
 * @delim: string of delimiters
 * Return: returns a pointer to s \0 termianted string or NULL
 */

char *_strtok(char *str, char *delim)
{
	static char *last_tok;
	char *end;
	int t_len;

	last_tok = NULL;

	if (str == NULL)
		str = last_tok;

	if (str == NULL || *str == '\0')
		return (NULL);

	t_len = strspn(str, delim);
	str = str + t_len;

	if (*str ==  '\0')
		return (NULL);

	end = str + strcspn(str, delim);

	if (*end != '\0')
	{
		*end = '\0';
		last_tok = end + 1;
	}
	else
	{
		last_tok = NULL;
	}
	return (str);
}
