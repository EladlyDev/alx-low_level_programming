#include "main.h"

int factorials(int, int);

/**
  * is_prime_number - Checks if a number is a prime
  * @n: the number
  *
  * Return: 1 if @n is a prime number, otherwise 0
  */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (factorials(n, 2));
}
/*
  */int factorials(int n, int fs)
{
	if (n == fs)
		return (1);
	else if (n % fs == 0)
		return (0);
	return (factorials(n, ++fs));
}
