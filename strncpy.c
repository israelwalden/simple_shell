#include "main.h"

/**
 * _strncpy - copies all char in src to dest
 * @dest: first sring
 * @src: second string
 * @n: limit on second string
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')/*while i < limit and 2ndis not at  end */
	{
		dest[i] = src[i];/*append char in second string to first string*/
		i++;/*increase counter*/
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
