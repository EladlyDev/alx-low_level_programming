#include "main.h"

int helper(int, int);

/**
  * _sqrt_recursion - gets the natural square root of a number.
  * @n: the number
  *
  * Return: the natural square root of @n
  */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}

/**
  * helper - this function helps in solving the task
  * @n: the number
  * @h: a helper integer
  *
  * Return: the solution
  */

int helper(int n, int h)
{
	if (n == h * h)
		return (h);
	else if (n <= h * h || n <= 0)
		return (-1);

	return (helper(n, h + 1));
}
