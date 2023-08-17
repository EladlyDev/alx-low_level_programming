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

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (i + 1 != n && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
