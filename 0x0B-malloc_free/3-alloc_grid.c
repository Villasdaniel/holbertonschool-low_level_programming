#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid -  return a pointer to 2d int array
 * @width: columns
 * @height: lines
 * Return: a pointer to 2d int array
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	a = (int **)malloc(height * sizeof(int));
	for (i = 0 ; i < height ; i++)
	{
		a[i] = (int *)malloc(width * sizeof(int));
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			a[i][j] = 0;
		}
	}
	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
