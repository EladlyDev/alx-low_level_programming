#include "main.h"
/*
   * This function prints every other character of a string,
   * starting with the first character, followed by a new line.
   */void puts2(char *str)
{
	int i, length;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
