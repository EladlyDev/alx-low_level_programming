#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the header of the linked list.
 * @idx: the desired index of the new node.
 * @n: the value of the new node.
 *
 * Return: the address of the new node, NULL on failure.
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tmp;
	unsigned int len;

	if ((!*h || !h) || (*h && idx == 0))
	{
		newNode = NULL;
		if (idx == 0)
			newNode = add_dnodeint(h, n);
		return (newNode);
	}

	/* get the length */
	for (tmp = *h, len = 0; tmp; tmp = tmp->next, len++)
		;

	if (idx > len)				/* index out of range */
		return (NULL);
	else if (idx == len)			/* add at end */
		newNode = add_dnodeint_end(h, n);
	else						/* add in the the middle */
	{
		newNode = malloc(sizeof(dlistint_t));
		if (!newNode)
			return (NULL);
		newNode->n = n;
		for (tmp = *h; tmp && idx; tmp = tmp->next, idx--)
			;
		tmp->prev->next = newNode;
		newNode->next = tmp;
		newNode->prev = tmp->prev;
		tmp->prev = newNode;
	}

	return (newNode);
}
