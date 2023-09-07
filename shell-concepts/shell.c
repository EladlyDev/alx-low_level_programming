#include "main.h"

/**
 * main - entry point to a super simple shell program, that executes
 * any program by its full path.
 * @argc: the length of arguments in argv.
 * @argv: the arguments passed to the program
 * @envp: the environment
 *
 * Return: 0 on success, -1 on failure.
 **/
int main(int __attribute__((unused)) argc, char **argv, char **envp)
{
	pid_t cpid;
	char **av, *buff, *buffdup, *piece, *delim = " \n";
	int status, i = 0, in_len = 0;
	size_t len = 0;

	write(STDOUT_FILENO, "#cisfun$ ", 9);

	if (getline(&buff, &len, stdin) == -1)
		perror("getline");
	buffdup = strdup(buff);
	if (buffdup == NULL)
		return (-1);
	piece = strtok(buffdup, delim);
	while (piece != NULL)
	{
		piece = strtok(NULL, delim);
		in_len++;
	}

	av = malloc(sizeof(av) * in_len);
	if (av == NULL)
		return (-1);

	piece = strtok(buff, delim);
	while (piece != NULL)
	{
		av[i] = piece;
		piece = strtok(NULL, delim);
		i++;
	}
	av[in_len + 1] = NULL;

	if (strcmp(av[0], "exit") == 0)
	{   free(av);
		return (0);
	}

	cpid = fork();
	if (cpid == -1)
		perror("fork");
	if (cpid == 0)
	{
		if (execve(av[0], av, envp) == -1)
			perror("execve");
	}
	else
	{   wait(&status);
		if (execve(argv[0], argv, envp) == -1)
			perror("execve");
	}

	free(buffdup);
	free(av);
	return (0);
}
