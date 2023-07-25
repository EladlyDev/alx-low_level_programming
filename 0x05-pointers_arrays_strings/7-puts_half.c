#include "main.h"
/*
   * This function prints the last half of a str
   */void puts_half(char *str)
{
	/*get string's length*/
	int i, len, half;

	i = len = 0;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	/*get the last half*/
	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;
	/*print the last half*/
	while (half <= len)
	{
		if (str[half] != '\0')
		{
			_putchar(str[half]);
		}
		half++;
	}
	_putchar(10);
}
