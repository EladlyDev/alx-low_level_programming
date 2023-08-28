#include "lists.h"

/**
 * listint_len - gets the number of elements in a linked list.
 * @h: the header of a linked list.
 *
 * Return: the number of elements.
 **/
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++, h = h->next)
		;
	return (count);
}
