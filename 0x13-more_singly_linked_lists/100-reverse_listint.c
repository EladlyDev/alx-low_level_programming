#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: the head of the linked list.
 *
 * Return: a pointer to the first node of the reversed list.
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before_head, *after_head;

	before_head = NULL;
	while (*head != NULL)
	{
		after_head = (*head)->next;
		(*head)->next = before_head;
		before_head = *head;
	    *head = after_head;
	}
	*head = before_head;

	return (*head);
}
