#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the header of the linked list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;

	while (head->next)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
