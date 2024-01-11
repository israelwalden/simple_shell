#include "main.h"

/**
 * _strdup - copy strings
 * @str: pointer to char
 * Return: returns NULL if str == NULL
 */


char *_strdup(char *str)
{
	char *ptr;
	int i;
	int size;

	size = 0;
	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}
	size++;
	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == 0)
	{
		return (0);
	}
	while (i <  size)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
