#include <stdio.h>
#include <stdlib.h>

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
	int i, n, total;

	n = total = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			n = atoi(argv[i]);
			if (n)
				total += n;
			else
			{
				puts("Error");
				return (1);
			}
		}
		printf("%d\n", total);
	}
	else
		printf("%d\n", 0);

	return (0);
}
