#include "variadic_functions.h"

/**
 * print_numbers - This function prints numbers followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	if (separator != NULL && n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			if (i + 1 != n)
				printf("%d%s", x, separator);
			else
				printf("%d\n", x);
		}
		va_end(args);
	}
}
