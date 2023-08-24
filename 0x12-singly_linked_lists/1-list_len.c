#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 * @h: the list.
 *
 * Return: the number of elements in @h.
 **/
size_t list_len(const list_t *h)
{
	int len;

	for (len = 0; h != NULL; h = h->next, len++)
		;
	return (len);
}
