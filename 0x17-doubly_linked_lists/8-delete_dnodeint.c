#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a distint_t linked list.
 * @head: the header of the linked list.
 * @idx: the index to be removed.
 *
 * Return: 1 on success, -1 on failure.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *tmp;

	if (!*head || !head)
		return (-1);

	tmp = *head;
	while (tmp)
	{
		if (idx == 0)
			break;
		tmp = tmp->next;
		idx--;
	}

	if (!tmp)
		return (-1);

	if (tmp->prev && tmp->next) /* remove at the middle */
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
	}
	else if (!tmp->prev && tmp->next) /* remove at the beginning */
	{
		tmp->next->prev = NULL;
		*head = tmp->next;
	}
	else if (!tmp->next && tmp->prev)	/* remove at end */
		tmp->prev->next = NULL;
	else					/* if there only one node */
		*head = NULL;

	free(tmp);
	return (1);
}
