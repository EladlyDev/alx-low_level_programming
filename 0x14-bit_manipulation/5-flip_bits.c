#include "main.h"

/**
 *  flip_bits - gets the number of bits you would need to flip to get from one
 * number to another.
 * @n: the decimal number
 * @m: the other decimal number.
 *
 * Return: the number of bits.
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int num = n ^ m;

	while (num > 0)
	{
		num = num & (num - 1);
		count++;
	}
	return (count);
}
