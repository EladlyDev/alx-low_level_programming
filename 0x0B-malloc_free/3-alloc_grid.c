#include "main.h"

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers.
  * @width: the width of the array
  * @height: the height of the array
  *
  * Return: a pointer to the array, NULL on failure.
***/
int **alloc_grid(int width, int height)
{
	int i, j, **pti;

	if (width <= 0 || height <= 0)
		return (NULL);
	pti = malloc(height * sizeof(int *));
	if (!pti)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		pti[i] = malloc(sizeof(int) * width);
		if (!pti[i])
		{
			for (j = 0; j < i; j++)
				free(pti[j]);
			free(pti);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			pti[i][j] = 0;

	return (pti);
}
