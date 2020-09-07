#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int idx = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
			*head = NULL;
		else
		{
			(*head)->next->prev = NULL;
			(*head) = aux->next;
		}
		free(aux);
		return (1);
	}
	while (idx < index && aux != NULL)
	{
		aux = aux->next;
		idx++;
	}
	if (aux == NULL)
		return (-1);
	if (aux->next == NULL)
	{
		aux->prev->next = NULL;
		free(aux);
		return (1);
	}
	aux->prev->next = aux->next;
	aux->next->prev = aux->prev;
	free(aux);
	return (1);
}
