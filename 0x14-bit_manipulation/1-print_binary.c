#include "holberton.h"

/**
 * print_binary - prints the binary rep of a n
 * @n: a decimal
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
