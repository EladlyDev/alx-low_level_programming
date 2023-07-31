#include "main.h"

/**
  * print_diagsums - This function prints the sum of two diagonals
  * of a square matrix of integers
  * @a: the matrix
  * @size: its size
  */

void print_diagsums(int *a, int size)
{
	int i, j, main = 0, sec = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			main += a[i] * a[j];
			sec += a[i] * a[i - j - 1];
			break;
		}
	}
	printf("%d, %d\n", main, sec);
}
