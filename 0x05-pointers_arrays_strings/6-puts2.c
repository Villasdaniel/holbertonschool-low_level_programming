#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: is a stream
 */

void puts2(char *str)
{
	long int a;

	for (a = 0 ; str[a] != '\0' ; a = a + 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
