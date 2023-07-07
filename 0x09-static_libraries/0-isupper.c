#include "main.h"

/**
 * _isupper - function is to determine an uppercase letter
 * @c: character to be examined
 * Return: 0 or 1 depending on outcome
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

