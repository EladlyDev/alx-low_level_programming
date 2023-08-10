#include "main.h"

void error(void);

/*
  * main - this program multiplies two positive numbers.
  * @ac - the length of av
  * @av - the arguments based to the program, including the numbers.
  *
  * Return - 0 on success and 98 with faliure.
  */int main(int ac, char **av)
{
	int i;
	unsigned long int j, l1, l2;
	/*char *res;*/

	/* Edge cases */
	if (ac != 3)
		error();
	for (i = 1; i < ac; i++)
		for (j = 0; j < strlen(av[i]); j++)
			if (av[i][j] > '9' || av[i][j] < '0') /* check if it is a number */
				error();
	return (0);
}

/**
  * error - this function for exiting with status of 98 indicating the error.
  */

void error(void)
{
	printf("Error\n");
	exit(98);
}
