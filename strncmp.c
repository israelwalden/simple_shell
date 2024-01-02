#include "main.h"
/**
 * _strncmp - compare string values
 * @s1: input value
 * @s2: input value
 * @n: number of chars to compare
 *
 * Return: s1[i] - s2[i]
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' &&  n != 0)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
		n--;
	}
	return (0);
}
