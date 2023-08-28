#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked lits.
 * @head: the head of the list.
 * @index: the index of the required node.
 *
 * Return: the nth node of the list, NULL if the node doesn't exist.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *target;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	target = malloc(sizeof(listint_t));
	if (!target)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
		{
			target = head;
			return (target);
		}
		head = head->next;
		i++;
	}

	return (NULL);
}
