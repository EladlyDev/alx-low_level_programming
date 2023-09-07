#include "main.h"

/**
 * main - entry point to a program that checks if a file exists.
 * @ac: the length of av.
 * @av: the arguments passed to the program.
 *
 * Return: 0 on success, -1 on failure.
 **/
int main(int ac, char **av)
{
	int i = 1, status;
	struct stat info;

	if (ac < 2)
	{
		write(STDERR_FILENO, "Usage: _which filename ...\n", 28);
		return (-1);
	}

	while (av[i])
	{
		status = stat(av[i], &info);
		write(STDOUT_FILENO, av[i], strlen(av[i]));
		write(STDOUT_FILENO, ": ", 2);
		if (status == 0)
			write(STDOUT_FILENO, "FOUND\n", 6);
		else
			write(STDOUT_FILENO, "NOT FOUND\n", 10);
		i++;
	}

	return (0);
}
