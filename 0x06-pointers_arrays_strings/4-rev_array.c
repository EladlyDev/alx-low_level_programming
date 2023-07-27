#include "main.h"
#include <string.h>
/**
  * reverse_array - This function reverses the content of an array of integers.
  * @a: The array
  * @n: the number of elements of the array
***/

void reverse_array(int *a, int n)
{
	int i;
	char tmp;

	for (i = 0; i < n; i++, --n)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
	}
}
