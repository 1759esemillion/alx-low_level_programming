#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int y;
	int z;

	for (y = 0; y < n--; y++)
	{
		z = a[y];
		a[y] = a[n];
		a[n] = z;
	}
}
