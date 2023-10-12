#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a distint_t linked list.
 * @head: the header of the linked list.
 * @index: the index to be removed.
 *
 * Return: 1 on success, -1 on failure.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *del, *tmp;

	if (!*head || !head)
		return (-1);

	tmp = *head;
	while (tmp)
	{
		if (idx == 0)
			break;
		idx--;
		tmp = tmp->next;
	}

	if (!tmp)
		return (-1);

	del = tmp;
	printf("hi\n");
	if (tmp->prev)
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}
	else
		tmp->next->prev = NULL;

	free(del);
	return (1);
}
