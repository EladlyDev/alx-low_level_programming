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

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (i + 1 != n && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
