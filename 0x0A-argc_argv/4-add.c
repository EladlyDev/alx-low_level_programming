#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Entry point
  * @argc: the length of argv
  * @argv: an array of pointers to arrays of character objects.
  * representing the argument that were entered on the command
  *
  * Return: always 0 which means succeed
  */

int main(int argc, char *argv[])
{
	int i, j, total = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					puts("Error");
					return (1);
				}
			}
			total += atoi(argv[i]);
		}
		printf("%d\n", total);
	}
	else
		printf("0\n");

	return (0);
}
