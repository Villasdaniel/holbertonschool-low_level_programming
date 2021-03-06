#include "holberton.h"

/**
 * print_last_digit - Return the las digit of a number
 * @n: is the number
 * Description: prints the las digit of a number
 * Return: a is the las digit of a number
 */

int print_last_digit(int n)
{
	int a = n % 10;

	if (n >= 0)
	{
		_putchar(a + '0');
		return (a);
	}
	_putchar(-a + '0');
	return (-a);
}
