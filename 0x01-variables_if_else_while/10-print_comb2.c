#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99
 * @void: it doesnt mean anything
 * Description: prints the numbers from 00 to 99
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0 ; a < 100 ; a++)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
