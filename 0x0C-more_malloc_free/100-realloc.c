#include "main.h"

char *_strncpy(char *dest, char *src, int n);

/**
  * _realloc -  reallocates a memory block using malloc and free.
  * @ptr: pointer to define its size
  * @old_size: the old size of the pointer
  * @new_size: the new size of the pointer
  *
  * Return: a pointer to the new memory filled with @ptr's data, NULL on fail.
***/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptv; /* a void pointer */

	/* Edge cases. */
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptv = malloc(old_size + new_size);
		if (!ptv)
			return (NULL);
		return (ptv);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}


	/* Allocate memory. */
	ptv = malloc(new_size);
	if (ptv == NULL)
		return (NULL);

	/* Filling the the data. */
	new_size = new_size > old_size ? old_size : new_size;
	_strncpy(ptv, ptr, new_size);

	free(ptr);
	return (ptv);
}

/**
 * _strncpy - This function copies a string,
 * it works exactly like strncpy function
 * @dest: the destination to copy to
 * @src: the source string
 * @n: the bytes number
 *
 * Return: pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}


