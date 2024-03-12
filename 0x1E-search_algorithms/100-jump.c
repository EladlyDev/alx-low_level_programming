#include "search_algos.h"

/**
 * jump_search - the jump search algorithm
 * @array: the array to search
 * @size: the length of the array
 * @value: the value to search forr
 *
 * Return: returns the first index where @value is located if existed, else -1
 **/
int jump_search(int *array, size_t size, int value)
{
	size_t i, n = (size_t) sqrt(size);

	if (!array)
		return (-1);
	for (i = 0; i < size; i += n)
	{
		if (value <= array[i])
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	if (i == 0)
		i = n;
	printf("Value found between indexes [%ld] and [%ld]\n", i - n, i);

	for (n = i - n; n < size && n <= i ; n++)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return ((int) n);
	}
	return (-1);
}
