#include "3-calc.h"

/**
 * get_op_func - This function selects the correct function to perform
 * the operation asked by the user.
 * @s: the operator
 *
 * Return: a pointer to the function that corresponds to the operator given
 * as a parameter. NULL on faliure.
 **/
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
