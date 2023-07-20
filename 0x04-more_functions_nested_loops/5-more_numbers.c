#include "main.h"
/*
   * This function prints 10 times the numbers, from 0 to
   * 14, followed by a new line.
   */void more_numbers(void)
{
	int i, j, y;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(j);
			if (j == 57)
			{
				for (y = 48; y <= 52; y++)
				{
					_putchar(49);
					_putchar(y);
				}
			}
		}
		_putchar('\n');
	}
}
