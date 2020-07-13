#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: a pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *buffer;
	int b, i;

	b = max - min + 1;
	buffer = malloc(sizeof(int) * b);
	for (i = 0 ; i < b ; i++, min++)
	{
		buffer[i] = min;
	}
	return (buffer);
}
