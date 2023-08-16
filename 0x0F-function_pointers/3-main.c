#include "3-calc.h"

/**
 * main - Entry point to a simple calculator.
 * @ac: the number of elements in @av.
 * @av: array of arrays of characters.
 *
 * Return: 0 in succeed, 98 in faliure.
 **/
int main(int ac, char **av)
{
	op_t op;
	int a, b, res;

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (strlen(av[2]) != 1)
	{
		printf("Error\n");
		return (99);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	op.op = av[2];
	if ((strcmp(op.op, "/") == 0 || strcmp(op.op, "%") == 0) && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	op.f = get_op_func(op.op);
	res = (*op.f)(a, b);
	printf("%d\n", res);

	return (0);
}
