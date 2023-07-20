#include "main.h"
/*
 * This function prints a square
 */void print_square(int size)
{
	int row, col;

	if (size)
	{
		for (col = 0; col < size; col++)
		{
			_putchar(35);
			for (row = 0; row < size; row++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
