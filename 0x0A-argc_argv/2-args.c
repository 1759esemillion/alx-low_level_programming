#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receivess
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int z;

	for (z = 0; z < argc; z++)
	{
		printf("%s\n", argv[z]);
	}
	return (0);
}

