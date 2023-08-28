#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: the head of the list.
 * @idx: the index of the insertion.
 * @n: the value to be inserted in the newNode's data.
 *
 * Return: the address of the new node, NULL on faliure.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *start, *target;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	start = *head;
	newNode = malloc(sizeof(listint_t));
	target = malloc(sizeof(listint_t));
	if (!newNode || !target)
		return (NULL);

	while (start != NULL)
	{
		if (i == idx)
		{
			target = start;
			break;
		}
		start = start->next;
		i++;
	}

	if (target)
	{
		newNode->n = n;
		newNode->next = target->next;
		target->next = newNode;
		return (newNode);
	}

	return (NULL);
}
