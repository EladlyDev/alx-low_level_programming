#include "main.h"

/**
 * print_path - prints each dir contained in the environment variable PATH
 *
 * Return: the number of directories on success, -1 on failure.
 **/
int print_path(void)
{
	char *dup, *str, *piece;
	int nod = 0; /* number of directories */

	dup = getenv("PATH");
	str = strdup(dup);
	piece = strtok(str, ":");
	while (piece != NULL)
	{
		printf("directory in $PATH: %s\n", piece);
		piece = strtok(NULL, ":");
		nod++;
	}

	free(str);
	return (nod);
}
