#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * @void: It doesnt mean anything
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
