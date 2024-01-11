#ifndef MAIN_H

#define MAIN_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

#define BUFFSIZE 1024

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
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strncmp(char *s1, char *s2, int n);
char *_strchr(char *s, char c);
char *_strncpy(char *dest, char *src, int n);
char *_strtok(char *str, char *delim);
unsigned int _strspn(char *s, char *accept);
char *_strdup(char *str);


char **tokenize_input(char *input, char *delim);
void prompt(char **env);
void execute(char **tok_commands);
void proc_man(char **tok_commands);
void free_arg(char **argv);
char *get_com_path(char *arg, char **env);
void _getenv(char **envar, char **var_names);
ssize_t _read(FILE fd, char *buf, size_t n_char);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);


#endif
