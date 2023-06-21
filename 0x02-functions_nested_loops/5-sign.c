#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @i: int check
 * Return: 1 and print + if i is greater than zero
 * 0 and print 0 if i is zero
 * -1 and print - if i is less than zero
 */

int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{	
		_putchar('-');
		return (-1);
	}
}
