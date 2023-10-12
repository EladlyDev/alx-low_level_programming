#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the header of the linked list.
 * @n: the value of the new node.
 *
 * Return: the address of the new element, NULL on failure.
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;

	newNode->next = *head;
	if (newNode->next)
		newNode->next->prev = newNode;
	(*head) = newNode;

	return (newNode);
}
