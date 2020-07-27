#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: a node
 * Return: lenght of the node
 */
size_t print_list(const list_t *h)
{
	size_t lenght;

	for (lenght = 0 ; h ; lenght++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (lenght);
}
