#include "main.h"

/**
 * print_line - print a function that draws a straight line in the terminal
 * @n: Number of times
 * Return: Always 0
 */

void print_line(int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
