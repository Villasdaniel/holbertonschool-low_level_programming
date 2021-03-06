#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer
 * Description: prints all natural numbers from n to 98
 * Return: anything
 */

void print_to_98(int n)
{
	int a;

	for (a = n ; a <= 98 ; a++)
	{
		printf("%d", a);
		if (a != 98)
		{
			printf(", ");
		}
	}
	for (a = n ; a >= 98 ; a--)
	{
		if (n != 98)
		{
			printf("%d", a);
			if (a != 98)
			{
			printf(", ");
			}
		}
	}
	printf("\n");
}
