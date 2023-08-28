#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: the head of the linked list.
 *
 * Return: the head node's data (n), 0 if the list is empty.
 **/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	n = tmp->n;

	free(tmp);
	return (n);
}
