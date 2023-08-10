#include "main.h"

/**
  * malloc_checked -  allocates memory using malloc.
  * @b: unsigned int
  *
  * Return: a void pointer to the reserved value, 98 with exit on failure.
  */

void *malloc_checked(unsigned int b)
{
	void *ptv;

	ptv = malloc(b);
	if (!ptv)
		exit(98);
	else
		return (ptv);
}
