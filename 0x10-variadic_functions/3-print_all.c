#include "variadic_functions.h"

/**
* character - print type.
* @list: list of arguments.
* Result: Nothing.
*/
void character(va_list list)
{
printf("%c", va_arg(list, int));
}
/**
* integer - print type.
* @list: list of arguments.
* Result: Nothing.
*/
void integer(va_list list)
{
printf("%d", va_arg(list, int));
}
/**
* floating - print type.
* @list: list of arguments.
* Result: Nothing.
*/
void floating(va_list list)
{
printf("%f", va_arg(list, double));
}
/**
* string - print type.
* @list: list of arguments.
* Result: Nothing.
*/
void string(va_list list)
{
	char *p;

	p = va_arg(list, char *);
	if (p == NULL)
	p = "(nil)";
	printf("%s", p);
}
/**
* print_all - Print all types.
* @format: number of arguments.
* Return: Nothing.
*/

void print_all(const char * const format, ...)
{
	form types[] = {
	{"c", character},
	{"i", integer},
	{"f", floating},
	{"s", string},
	{NULL, NULL}
	};

	int i, j;
	char *separator;

	va_list list;

	va_start(list, format);
	i = 0;
	separator = "";

	while (format && format[i])
	{
		j = 0;
		while ((types[j].ch) != NULL)
		{
			if (format[i] == types[j].ch[0])
			{
			printf("%s", separator);
			types[j].func(list);
			separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
