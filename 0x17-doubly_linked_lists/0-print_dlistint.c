#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the header of the list.
 *
 * Return: the number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	int len;

	if (!h)
		return (0);

	for (len = 0; h; h = h->next, len++)
		printf("%d\n", h->n);

	return (len);
}
