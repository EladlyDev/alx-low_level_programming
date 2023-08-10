#include "main.h"

char *_memset(char *, char, unsigned int);

/**
  * _calloc - allocates memory for an array, using malloc.
  * @noe: the number of elements on the array
  * @size: size of each element
  *
  * Return: a pointer to the allocated memory, NULL on faliure
***/

void *_calloc(unsigned int noe, unsigned int size)
{
	void *ptr;

	if (!noe || !size)
		return (NULL);

	/* allocating memory */
	ptr = malloc(noe * size);
	if (!ptr)
		return (NULL);

	/* filling it with zeros */
	_memset(ptr, 0, noe * size);

	return (ptr);
}

/**
  * _memset - fill memory with a constant byte.
  * @s:Pointer to the block of memory to fill.
  * @b:Value to be set. The value is passed as an int.
  * @n:Number of bytes to be set to the value.
  *
  * Return: Pointer to block memory filled.
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		*s = b;
		count++;
		s++;
	}
	return (s);
}
