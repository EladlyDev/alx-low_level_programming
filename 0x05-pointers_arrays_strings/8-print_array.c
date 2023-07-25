#include "main.h"
#include <stdio.h>
/*
   * This function prints n elements from a givin array
   */void print_array(int *a, int n)
{
	int i;

	/*print n elements of the array*/
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	/*adding a new line*/
	putchar(10);
}
