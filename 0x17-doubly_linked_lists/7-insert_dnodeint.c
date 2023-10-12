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

	if (!*h || !h)
		return (NULL);
	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}

	tmp = *h;
	while (tmp->next)
	{
		if (idx == 0)
			break;
		tmp = tmp->next;
		idx--;
	}

	if (idx > 1)
		return (NULL);
	else if (idx == 1)
		newNode = add_dnodeint_end(h, n);
	else
	{
		if (!tmp->prev)
			newNode = add_dnodeint(h, n);
		else
		{
			newNode = malloc(sizeof(dlistint_t));
			if (!newNode)
				return (NULL);
			newNode->n = n;
			tmp->prev->next = newNode;
			newNode->next = tmp;
			tmp->prev = newNode;
		}
	}

	return (newNode);
}
