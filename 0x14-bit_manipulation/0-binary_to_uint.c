#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1
 * Return: conv number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, base = 1;
	int pos;

	if (!b)
		return (0);
	for (pos = 0; b[pos]; pos++)
		if (b[pos] != '0' && b[pos] != '1')
			return (0);

	for (pos = pos - 1; pos >= 0; pos--)
	{
		if (b[pos] == '1')
			decimal += base;
		base *= 2;
	}

	return (decimal);
}
/*{
	int c, length;
	unsigned int d = 0, e = 0;

	for (length = 0 ; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] == '1')
			return(0);
	}
	c = length;
	for (; c > 0 ; c--, e++)
	{
		d =  b[c] + (b[c] * pow(2,e));
	}
	return (d);
}*/