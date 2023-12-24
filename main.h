#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


void rm_end_slash(char *tok);
char **tokenize_input(char *input, char *delim);
void prompt();


#endif
