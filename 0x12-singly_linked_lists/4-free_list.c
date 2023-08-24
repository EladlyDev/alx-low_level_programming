#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the list_t's head.
 **/
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		free(head);
		return;
	}
	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head->str);
	free(head);
}
