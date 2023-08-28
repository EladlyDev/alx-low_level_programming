#include "lists.h"

/**
 * sum_listint - gets the sum of all the data (n) of a listint_t linked list.
 * @start: the head of the list.
 *
 * Return: the sum of all the data.
 **/
int sum_listint(listint_t *start)
{
	int sum = 0;

	if (start == NULL)
		return (0);

	while (start->next != NULL)
	{
		sum += start->n;
		start = start->next;
	}
	sum += start->n;

	return (sum);
}
