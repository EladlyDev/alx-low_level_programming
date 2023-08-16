#include "function_pointers.h"

/**
 * array_iterator - This function executes a function given asa parameter
 * on each element of an array.
 * @array: the array to implement
 * @size: the size of the array
 * @action: the function that contains the action to implement.
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
