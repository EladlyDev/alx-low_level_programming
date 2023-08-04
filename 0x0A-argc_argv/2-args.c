#include <stdio.h>

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
	int i;

	for (i = 0; i < argc; i++)
	{
		puts(argv[i]);
	}

	return (0);
}
