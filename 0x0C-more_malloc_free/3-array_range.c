#include "main.h"

/**
  * array_range -  creates an array of integers.
  * @min: the start point.
  * @max: the end point.
  *
  * Return: a pointer to the newly created array, NULL on faliure
***/

int *array_range(int min, int max)
{
	int i, j, *ptr;

	if (min > max)
		return (NULL);

	/* allocating memory */
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (!ptr)
		return (NULL);

	/* filling the data */
	for (i = min, j = 0; i <= max; i++, j++)
		ptr[j] = i;

	return (ptr);
}
