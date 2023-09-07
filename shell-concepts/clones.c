#include "main.h"

/**
 * main - entry point to a program that executes ls -l /tmp in 5 different
 * childs, each one waits untill the previous finish.
 *
 * Return: 0 on success, -1 on failure.
 **/
int main(void)
{
	pid_t cpid;
	int i = 0, status;
	char *av[] = {"ls", "-l", "/tmp", NULL};

	while (i < 5)
	{
		cpid = fork();
		if (cpid == 0)
		{
			if (execve("/usr/bin/ls", av, NULL) == -1)
				perror("execve");
			break;
		}
		else
		{
			wait(&status);
			i++;
			continue;
		}
	}

	return (0);
}
