#include "search_algos.h"

/**
 * print - prints a part of an array
 * @array: the array
 * @start: the start point
 * @end: the end point
 **/
void print(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i != end)
			printf("%i, ", array[i]);
		else
			printf("%i\n", array[i]);
	}
}


/**
 * helper - a recursive function helper to perform bs
 * @array: the array to search in
 * @value: the value to search for
 * @l: the start left point
 * @r: the end right point
 *
 * Return: the index of the element, -1 if not founded
 **/
int helper(int *array, int value, size_t l, size_t r)
{
	if (l <= r)
	{
		size_t m = (l + r) / 2;

		print(array, l, r);
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			return (helper(array, value, m + 1, r));
		else
			return (helper(array, value, l, m - 1));
	}
	return (-1);
}


/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: the array to search
 * @n: the length of the @array
 * @value: the value to search for
 *
 * Return: the first index of the value if founded, -1 if not
 **/
int advanced_binary(int *array, size_t n, int value)
{
	if (!array || n == 0)
		return (-1);
	return (helper(array, value, 0, n - 1));
}
