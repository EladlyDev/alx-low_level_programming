#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @start: the head of the list.
 **/
void free_listint(listint_t *start)
{
	listint_t *tmp;

	if (start == NULL)
		free(start);

	while (start->next != NULL)
	{
		tmp = start;
		start = start->next;
		free(tmp);
	}
	free(start);
}
