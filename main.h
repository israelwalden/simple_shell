#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

/**
 * struct com - struct to hold command and path
 * @c: command string
 * @file_path: path for file
 */
typedef struct com
{
	char *c;
	char *file_path;
} shell_commands;


int _strcmp(char *s1, char *s2);



char **tokenize_input(char *input, char *delim);
void prompt(void);
void execute(char **tok_commands);
void proc_man(char **tok_commands);
void free_arg(char **argv);
char *get_com_path(char *arg);

#endif
