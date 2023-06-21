#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	unsigned long int y, z, next, sum;

	y = 1;
	z = 2;
	sum= 0;

	for (x = 1, x <= 33; x++)
	{
		if (y < 4000000 && (y % z) == 0)
		{
			sum = sum + y;
		}
		next = y + z;
		y = Z;
		z = next;
	}

	printf("%lu\n", sum);
	return (0);
}
