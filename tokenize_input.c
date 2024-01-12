#include "main.h"
/**
 * tokenize_input - tokenzes user input command
 * @input: char pointer to user input
 * @delim: char poiner to delimiter(' ')
 * Return: pointer to tokens
 */

char **tokenize_input(char *input, char *delim)
{
	char **argv;
	char *line_copy = strdup(input);
	int num_tok = 0;
	int i = 0;
	char *tok = strtok(line_copy, delim);
	/*int len = strlen(line_copy);*/

	/*count number of tokens*/
	while (tok)
	{
		num_tok++;
		tok = strtok(NULL, delim);
	}
	/*allocate mem for tokens*/
	argv = malloc((num_tok + 1) * sizeof(char *));

	free(line_copy);
	line_copy = strdup(input);
	tok = strtok(line_copy, delim);
	while (tok)
	{

		argv[i] = malloc((strlen(tok) + 1) * sizeof(char));
		strcpy(argv[i], tok);
		tok = strtok(NULL, delim);
	i++;

	}
	argv[i] = NULL;
	free(line_copy);
	return (argv);
}
