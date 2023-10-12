#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the head of the list.
 * @n: the new node's value.
 *
 * Return: the address of the new node, or NULL if it failed.
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	for (tmp = *head; tmp->next; tmp = tmp->next)
		;
	tmp->next = newNode;
	newNode->prev = tmp;

	return (newNode);
}
