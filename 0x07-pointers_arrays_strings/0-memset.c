#include "main.h"

/**
  * _memset - This function fills the n bytes of area s with
  * the constant b
  * @s: the destination area of the memory to fill
  * @b: the byte of char that will fill the area
  * @n: the end of the aria
  *
  * Return: a pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
