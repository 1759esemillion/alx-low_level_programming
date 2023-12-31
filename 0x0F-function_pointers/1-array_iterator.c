#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;

	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}
}

