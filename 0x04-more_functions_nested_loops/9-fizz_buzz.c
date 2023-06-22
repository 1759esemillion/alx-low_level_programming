#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: program that prints the numbers from 1 to 100
 * But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz
 * Return: Always 0
 */

int main(void)
{
	int y;

	for (y = 1; y <= 100; y++)
	{
		if (y % 15 == 0)
			printf("FizzBuzz");
		else if (y % 3 == 0)
			printf("Fizz");
		else if (y % 5 == 0)
			printf("Buzz");
		else
			printf("%d", y);
		if (y < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
