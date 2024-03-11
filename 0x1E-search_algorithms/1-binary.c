#include "search_algos.h"

void print(int *array, size_t i, size_t n)
{
	printf("Searching in array: ");
	for (; i < n; i++)
	{
		if (i == n - 1)
			printf("%i\n", array[i]);
		else
			printf("%i, ", array[i]);
	}
}

int helper(int *array, int val, size_t l, size_t r, size_t n)
{
	print(array, l, r);
	if (l <= r) {
		size_t mid = l + (r - l) / 2;
		if (val == array[mid])
			return mid;
		else if (val > array[mid])
		{
			return helper(array, val, mid + 1, r, n);
		}
		else
		{
			return helper(array, val, l, mid - 1, n);
		}
	}

	return -1;
}

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: the array to search
 * @n: the length of the @array
 * @value: the value to search for
 *
 * Return: the first index of the value if founded, -1 if not
 **/
int binary_search(int *array, size_t n, int value)
{
	return helper(array, value, 0, n, n);
}
