#include "lists.h"

/**
 * sum_dlistint - returns the sum of a ll the data (n) of a dlistint_t list.
 * @head: the header of the linked list.
 *
 * Return: the sum, 0 if the list is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;

	return (sum);
}
