#include "main.h"

/**
 * _read -reads line from input stream
 *  @fd: FILE stream;
 *  @buf: char pointer or cahr array
 *  @n_char: size of buff
 *  Return: number of cahrs
 */
ssize_t _read(FILE fd, char *buf, size_t n_char)
{
	return (read(fd, buf, n_char));
}
