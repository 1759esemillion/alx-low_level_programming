#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *mmm;
	int y, z = 0;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
		y++;
	mmm = malloc(sizeof(char) * (y + 1));
	if (mmm == NULL)
		return (NULL);
	for (z = 0; str[z]; z++)
		mmm[z] = str[z];
	return (mmm);
}

