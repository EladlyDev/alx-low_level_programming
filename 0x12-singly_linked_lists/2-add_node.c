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

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

/**
 * _strlen - gets the legnth of a string.
 * @str: the string.
 *
 * Return: the length of the @str.
 **/
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
