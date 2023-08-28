#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list.
 * @start: the head of the list.
 * @val: the value
 *
 * Return: the address of the new element, NULL in faliure.
 **/
listint_t *add_nodeint(listint_t **start, const int val)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = val;
	newNode->next = *start;
	*start = newNode;

	return (newNode);
}
