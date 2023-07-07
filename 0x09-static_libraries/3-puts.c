#include "main.h"

/**
 *_puts - function is used to write a string to the standard output
 *
 * @s: string to print
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}

