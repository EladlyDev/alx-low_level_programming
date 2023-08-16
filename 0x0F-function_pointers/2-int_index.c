#include "function_pointers.h"

/**
 * int_index - This function searches for an integer.
 * @array: the array to search in
 * @size: the size of the array.
 * @cmp: a pointer to the function to be used to compare values.
 *
 * Return: The index of the first element for which the cmp function
 * does not return 0, if no matches, returns -1 in faliure.
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Edge Cases */
	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
