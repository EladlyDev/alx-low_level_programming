#include "main.h"

/**
  * create_array - creates an array of chars, and initializes it with a char.
  * @size: the size of the array
  * @c: the char to fill it with
  *
  * Return: a pointer to the array, or NULL if it fails
***/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptc;

	ptc = malloc(sizeof(char) * size);
	if (size <= 0 || !ptc)
		return (0x0);

	for (i = 0; i < size; i++)
	{
		ptc[i] = c;
	}
	ptc[i + 1] = '\0';

	return (ptc);
}
