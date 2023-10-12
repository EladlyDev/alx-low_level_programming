#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the header of the linked list.
 * @index: the desired index.
 *
 * Return: returns the node, NULL if it doesn't exist.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	if (!head)
		return (NULL);

	for (tmp = head; tmp && index; tmp = tmp->next, index--)
		;

	return (tmp);
}
