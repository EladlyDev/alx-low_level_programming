#include "main.h"

/**
 * main - entry point to a program that gets the pid and ppid and max pid.
 *
 * Return: 0 always.
 **/
int main(void)
{
	int ppid, pid, maxppi;
	char str[50];

	ppid = getppid();
	pid = getpid();
	maxppi = open("/proc/sys/kernel/pid_max", O_RDONLY);

	read(maxppi, str, 50);
	printf("current process ID is: %i\n", pid);
	printf("parent process ID is: %i\n", ppid);
	printf("max process ID is: %s", str);
	return (0);
}
