#include "search_algos.h"

/**
 * interpolation_search - the interpolation search algorithm
 * @array: the array to search
 * @n: the length of the array
 * @value: the value to search forr
 *
 * Return: returns the first index where @value is located if existed, else -1
 **/
int interpolation_search(int *array, size_t n, int value)
{
	size_t low, high, pos;

	if (!array)
		return (-1);

	low = 0;
	high = n - 1;
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		if (pos >= n)
		{
			printf("Value checked array[%li] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
