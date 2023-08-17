#include "variadic_functions.h"

/**
 * print_strings - prints a strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	if (separator && n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(args, char *);
			if (!s)
				s = "nil";
			if (i + 1 != n)
				printf("%s%s", s, separator);
			else
				printf("%s\n", s);
		}
	}
}
