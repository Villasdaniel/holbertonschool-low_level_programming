#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: an integer
 * Description: draws a straight line in the terminal
 * Return: doesnt return anything
 */

void print_line(int n)
{
	int a;

	for (a = 0 ; a < n ; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
