#include "main.h"

/**
 * _memcpy - function used to copy a block of memory
 * @dest: stored memory
 * @src: where it is copied from
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y = 0;
	int i = n;

	for (; y < i; y++)
	{
		dest[y] = src[y];
		n--;
	}
	return (dest);
}
