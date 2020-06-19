#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: is the size of the square
 * Description: Prints a triangle, followed by a new line
 * Return: it doesnt return any variable
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 1 ; a <= size ; a++)
	{
		for (b = 1 ; b <= size ; b++)
		{
			if (a <= (size - b))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
