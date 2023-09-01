#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the binary number.
 *
 * Return: the converted number, 0 on faliure.
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
		;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		res += (*b - '0') << (i - 1);
		b++;
		i--;
	}
	return (res);
}
