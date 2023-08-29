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

	start = ptr = prePtr = *head;
	/* check if idx is suitable */
	while (start->next != NULL)
	{
		start = start->next;
		count++;
	} count++;
	if (idx > count)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;

	while (i != idx)
	{
		prePtr = ptr;
		ptr = ptr->next;
		i++;
	}

	if (prePtr == ptr)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		prePtr->next = newNode;
		newNode->next = ptr;
	}

	return (newNode);
}
