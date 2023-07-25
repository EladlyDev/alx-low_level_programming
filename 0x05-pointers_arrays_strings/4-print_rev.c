#include "main.h"
/*
   * This function prints a string,
   * in reverse, followed by a new line.
   */ void print_rev(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	for (i = 0; count >= i; count--)
	{
		_putchar(s[count]);
	}
	_putchar(10);
}
