#include "main.h"

/**
 * _islower - function is to determine an lowercase letter
 * @c: character to be examined
 * Return: 0 or 1 depending on outcome
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

