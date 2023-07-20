#include "main.h"
/*
   * This function prints a triangle
   */void print_triangle(int size)
{
	int i;

	if (size)
	{
		for (i = 1; i <= size; i++)
		{
			int indent = size - i, j;
			int hash = size - indent, y;

			for (j = 0; j < indent; j++)
			{
				_putchar(32);
			}
			for (y = 0; y < hash; y++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
