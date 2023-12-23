#include "main.h"


char **tokenize_input(char *input, char *delim)
{
/*
	copy string and get number of char it
	


*/
	char **tokens;
	char *copy = strdup(input);
	int len;
	int num_tok;
	char *tok = strtok(input, delim);

	while(tok)
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

	return (tokens);
}
