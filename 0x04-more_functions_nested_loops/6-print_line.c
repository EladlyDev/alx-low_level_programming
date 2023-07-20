#include "main.h"
/*
 * This function draws a straight line in the terminal.
 */void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar(10);
}
