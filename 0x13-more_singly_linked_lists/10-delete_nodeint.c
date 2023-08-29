#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given position.
 * @head: the head of the list.
 * @index: the index of the element to delete.
 *
 * Return: 1 on succeed, -1 on faliure.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *start, *preTarget, *target, *temp;
	unsigned int i = 0, count;

	if (head == NULL)
		return (-1);

	/* getting the length and check if index is suitable */
	for (count = 0, start = *head; start != NULL; count++, start = start->next)
		;
	if (index > count || count == 0)
		return (-1);

	/* setting target and preTarget */
	target = preTarget = *head;
	while (i != index)
	{
		preTarget = target;
		target = target->next;
		i++;
	}

	/* if i was equal to index and the loop didn't work */
	if (preTarget == target)
	{
		temp = target;
		*head = target->next;
		free(temp);
	}
	else
	{
		temp = target;
		preTarget->next = target->next;
		free(temp);
	}

	return (1);
}
