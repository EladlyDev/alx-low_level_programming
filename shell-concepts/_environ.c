#include "main.h"

/**
 * main - entry point to a program that prints the environment inherited
 * from the parent in two ways, 1- using env (the third parameter in main)
 * and 2- using environ which is a local variable contains the environment.
 * @ac: the length of av
 * @av: list of arguments passed to the program
 * @env: contains information about the environment
 *
 * Return: 0 indicating success.
 **/
int main(int __attribute__((unused)) ac, char __attribute__((unused)) **av,
	char **env)
{
	int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], strlen(environ[i]));
		putchar(10);
		write(STDOUT_FILENO, env[i], strlen(env[i]));
		putchar(10);
		i++;
	}

	return (0);
}
