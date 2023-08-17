#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	int i, nob;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nob = atoi(argv[1]);
	if (nob < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nob; i++)
	{
		printf("%02x", (ptr[i] & 0xFF));
		if (i != nob - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
