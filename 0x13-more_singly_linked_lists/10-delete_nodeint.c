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
	listint_t *start, *preTarget, *target, *afterTarget;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	start = *head;
	if (index == 0)
	{
		if (*head)
		{
			target = start;
			afterTarget = target->next;
			*head = afterTarget;
			free(target);
			return (1);
		}
		return (-1);
	}

	while (start != NULL)
	{
		if (i == index - 1)
		{
			preTarget = start;
			break;
		}
		start = start->next;
		i++;
	}

	if (preTarget)
	{
		target = preTarget->next;
		afterTarget = target->next;
		preTarget->next = afterTarget;
		free(target);
		return (1);
	}
	return (-1);
}
