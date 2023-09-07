#include "main.h"

/**
 * link_path - builds a linked list of the PATH directories.
 *
 * Return: a pointer to the head of the linked list, NULL on failure.
 **/
node_t *link_path(void)
{
	char *path, *piece, *pathdup;
	node_t *head = NULL;

	path = getenv("PATH");
	if (!path)
		return (NULL);

	pathdup = strdup(path);
	if (!pathdup)
		return (NULL);

	piece = strtok(pathdup, ":");
	while (piece != NULL)
	{
		if (new_node(&head, piece) == NULL)
			return (NULL);
		piece = strtok(NULL, ":");
	}

	free(pathdup);
	return (head);
}
