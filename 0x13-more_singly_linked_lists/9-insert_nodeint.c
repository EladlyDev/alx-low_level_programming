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
	listint_t *newNode, *start, *prePtr, *ptr;
	unsigned int i = 0, count = 0;

	if (head == NULL)
		return (NULL);

	/* check if idx is suitable */
	start = *head;
	while (start != NULL)
	{	start = start->next;
		count++;
	}
	if (idx > count)
		return (NULL);

	/* initialize */
	ptr = prePtr = *head;
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;

	/* get the node at idx, and the one before it */
	for (i = 0; i != idx; prePtr = ptr, ptr = ptr->next, i++)
		;

	/* if idx was 0 and the loop didn't work */
	if (prePtr == ptr)
	{newNode->next = *head;
		*head = newNode;
	}
	else
	{	prePtr->next = newNode;
		newNode->next = ptr;
	}

	return (newNode);
}
