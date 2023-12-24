#include "main.h"
/**
 * tokenize_input - tokenzes user input command
 * @input: char pointer to user input
 * @delim: char poiner to delimiter(' ')
 * Return: pointer to tokens
 */

char **tokenize_input(char *input, char *delim)
{
	char *copy = strdup(input);
	if(line_copy == NULL)
	{
		perror("strdup");
		exit(EXIT_FAILURE);
	}
	int num_tok = 0;
	char *tok = strtok(copy, delim);
	int len = strlen(line_copy);
	char **tokens;

	while(tok)
	{
		num_tok++;
		tok = strtok(NULL, delim);
	}	

	tokens = (char **)malloc((num_tok + 1) * sizeof(char *));
	if (!tokens)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	/***********************fill tokens****************************/
	strcopy(line_copy, line);
	num_tok = 0
	tok = strtok(line_copy, delim);

	while(tok)
	{
		int tok_len =strlen(tok);

		while(tok_len > 0 && tok[tok_len -1] == '/' )
		{
			tok[--tok_len]= '\0'
		}

		tokens[num_tok] = strdup(tok);
		if(!tokens[num_tok])
		{
			perror("strdup");
			exit(EXIT_FAILURE);
		}
		
		num_tok++;
		tok = strtok(NULL, delim);
	}

	if (num_tok > 1)
	{
		int last_tok_len = strlen(tokens[num_tok - 1]);
		if (last_tok_len > 0 && token[num_tok -1][last_token_len - 1] == '\n')
		{
			token[num_tok -1][last_tok_len -1] = '\0';
		}
	}
	tokens[num_tok] = NULL;

	free(linecopy);
	return (tokens);
}
