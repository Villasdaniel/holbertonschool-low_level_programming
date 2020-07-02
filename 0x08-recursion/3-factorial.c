#include "holberton.h"

/**
 * factorial - returns the factorial
 * @n: an integer
 * Return: an integuer, factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
