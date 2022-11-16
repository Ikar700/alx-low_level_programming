#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: pointer to be copied to
 * @src: pointer to be copied from
 * @n: number of bytes to be copied
 *
 * Return: a pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
