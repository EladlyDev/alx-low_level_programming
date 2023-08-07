#include "main.h"

/**
  * free_grid - frees a 2 dimensional grid, created by alloc_grid function
  * @grid: a pointer to the array
  * @height: the height of it
***/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
