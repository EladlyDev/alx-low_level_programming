#include "main.h"

/**
 * main - entry point to a program that takes anything and prints it to stdout.
 *
 * Return: 0 always.
 **/
int main(void)
{
	char *in;
	size_t size = 50;

	in = malloc(sizeof(char) * size);
	write(STDOUT_FILENO, "$ ", 2);
	size = getline(&in, &size, stdin);
	write(STDOUT_FILENO, in, size);

	return (0);
}
