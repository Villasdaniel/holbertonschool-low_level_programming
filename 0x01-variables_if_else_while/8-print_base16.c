# include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * @void: doesnt mean anything
 * Description: prints all the numbers of base 16
 * Return:0
 */
int main(void)
{
	char a;

	for (a = 0 ; a <= 9 ; a++)
		putchar(a + '0');
	for (a = 'a' ; a <= 'f' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
