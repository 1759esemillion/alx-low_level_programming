#include "main.h"
/**
 * print_number - function that prints an integer
 * @n:.input integer
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int z = n;

	if (n < 0)
	{
		_putchar(45);
		z = -z;
	}
	if (z / 10)
	{
		print_number(z / 10);
	}
	_putchar(z % 10 + '0');
}
