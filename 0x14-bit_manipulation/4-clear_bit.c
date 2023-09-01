#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the decimal number.
 * @index: the index of the bit to change.
 *
 * Return: 1 if succeed, -1 on falure.
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1 << index;
	if (index > 63)
		return (-1);
	*n = *n & ~mask;
	return (1);
}
