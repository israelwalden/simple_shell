#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

char **tokenize_input(char *input, char *delim);
void prompt();
void execute(char **tok_commands);
void proc_man(char **tok_commands);


#endif
