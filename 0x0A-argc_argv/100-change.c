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
	int i, cents, noc;
	int coins[] = {25, 10, 5, 2, 1};

	noc = i = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents < 0)
			printf("0\n");
		else
		{
			for (i = 0; i < 5; i++)
			{
				if (cents % coins[i] == 0)
				{
					noc += cents / coins[i];
					break;
				}
				else
				{
					noc += cents / coins[i];
					cents = cents % coins[i];
				}
			}
			printf("%d\n", noc);
		}
	}
	return (0);
}
