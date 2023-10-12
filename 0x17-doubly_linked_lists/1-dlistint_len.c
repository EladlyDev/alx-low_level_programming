#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the header of the linked list.
 *
 * Return: the number of nodes in @h.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int len;

	if (!h)
		return (0);

	for (len = 0; h; h = h->next, len++)
		;

	return (len);
}
