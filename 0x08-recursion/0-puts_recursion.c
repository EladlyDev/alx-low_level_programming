#include "main.h"

/**
  * _puts_recursion - This function prints a string followed by a new line
  * @s: the string to print
  */

void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(++s);
	}
}
