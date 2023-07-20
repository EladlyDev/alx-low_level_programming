#include "main.h"
/*
 * This function prints a square
 */void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (col = 0; col < size; col++)
		{
			_putchar(35);
			for (row = 1; row < size; row++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
