#include "main.h"

/**
 * new_node - adds a new node to the end of a linked list
 * @head: the head of the linked list.
 * @value: the value
 *
 * Return: pointer to the new_node, NULL on failure
 **/
node_t *new_node(node_t **head, char *value)
{
	node_t *new_node, *start = *head;

	new_node = malloc(sizeof(node_t));
	if (!new_node)
		return (NULL);
	new_node->value = value;

	if (start == NULL)
	{
		new_node->next = start;
		start = new_node;
		return (start);
	}
	else
	{
		node_t *tmp = start;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->next = NULL;
	}

	return (new_node);
}
