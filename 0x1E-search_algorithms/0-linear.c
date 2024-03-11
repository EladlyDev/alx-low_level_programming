#include "search_algos.h"

/**
 * linear_search - the leaner search algorithm
 * @array: the array to search
 * @n: the length of the array
 * @value: the value to search forr
 *
 * Return: returns the first index where @value is located if existed, else -1
 **/
int linear_search(int *array, size_t n, int value)
{
	size_t i;

	if (!array || !n || !value)
		return (-1);

	for (i = 0; i < n; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
