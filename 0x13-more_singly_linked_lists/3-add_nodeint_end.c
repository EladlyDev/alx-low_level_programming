#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @start: the head of the list.
 * @val: the value
 *
 * Return: the address of the new element, NULL on faliure.
 **/
listint_t *add_nodeint_end(listint_t **start, const int val)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = val;
	newNode->next = NULL;

	if (*start == NULL)
	{
		*start = newNode;
		return (newNode);
	}

	lastNode = *start;
	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}

	lastNode->next = newNode;

	return (newNode);
}
