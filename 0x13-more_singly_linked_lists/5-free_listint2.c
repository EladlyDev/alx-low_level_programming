#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list, and sets the head to NULL.
 * @head: the head of the list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *tmp, *start;

	start = *head;
	while (start->next != NULL)
	{
		tmp = start;
		start = start->next;
		free(tmp);
	}
	free(start);
	*head = NULL;
}
