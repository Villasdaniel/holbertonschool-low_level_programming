#include <stdio.h>

/**
 * main - prints alphabet a...zA...Z
 * @void: doesnt mean anything
 * Description: prints alphabet a...zA...Z
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; ++c)
		putchar(c);
	for (c = 'A' ; c <= 'Z' ; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
