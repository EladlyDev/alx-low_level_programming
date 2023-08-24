#include "lists.h"

/**
 * add_node_end - adds a node into the end of a linked list.
 * @head: the head of the linked list.
 * @str: the string to append into the node.str
 *
 * Return: the address of the new element, or NULL if it failed.
 **/
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *last, *newNode;
	int i;

	/* initialize the newNode */
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	newNode->len = i;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	/* get the last node */
	last = *head;
	while (last->next != NULL)
		last = last->next;

	/* point from last to newNode */
	last->next = newNode;

	return (newNode);
}
