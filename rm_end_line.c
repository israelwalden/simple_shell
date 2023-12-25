#include "main.h"
/**
 * rm_end_line - removes the endling '\n'
 * @tokens: tokenised input
 * @num_tok: number of tokens
 */

void rm_end_line(char **tokens, int num_tok)
{
	int tok_len = strlen(tokens[num_tok - 1]);

	if (tok_len > 0 && tokens[num_tok - 1][tok_len - 1] == '\n')
	{
		tokens[num_tok - 1][tok_len - 1] = '\0';
	}
}
