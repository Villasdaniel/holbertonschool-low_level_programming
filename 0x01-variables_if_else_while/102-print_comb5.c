#include <stdio.h>

/**
 * main - prints the numbers from 000 to 999
 * @void: it doesnt mean anything
 * Description: prints the numbers from 000 to 999
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 9 ; b++)
		{
			for (c = 0 ; c < 10 ; c++)
			{
				for (d = 0 ; d < 10 ; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a != 9 || b != 8 || c != 9 || d != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
