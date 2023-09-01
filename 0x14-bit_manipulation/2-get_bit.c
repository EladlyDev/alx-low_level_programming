#include "main.h"

/**
 * get_bit - gets a bit at a given index.
 * @n: the number in decimal.
 * @index: the desierd bit's index.
 *
 * Return: the value of a bit at a given index.
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n & (1 << index)) != 0);
}
