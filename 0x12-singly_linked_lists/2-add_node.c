#include "lists.h"

/**
 * add_node - Adds new node to at the begining of a list.
 * @head: the head of the list, node.
 * @str: the str to attach.
 *
 * Return: the address of the new element, NULL on faliure.
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int i;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
