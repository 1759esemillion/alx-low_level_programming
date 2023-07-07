#include "main.h"

/**
 * _strchr - Entry point
 * @s: input value
 * @c: input value
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int y;

	for (y = 0; s[y] >= '\0'; y++)
	{
		if (s[y] == c)
			return (&s[y]);
	}
	return (0);
}
