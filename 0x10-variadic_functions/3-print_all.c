#include "variadic_functions.h"

/**
 * print_all - this function prints anything.
 * @format: a list of types of arguments passed to the function.
 **/
void print_all(const char * const format, ...)
{
	type_t type[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	int i = 0, j;
	void (*f)(va_list);
	va_list args;

	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (type[j].f)
		{
			if (type[j].c == format[i])
			{
				f = type[j].f;
				f(args);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * print_char - prints a char
 * @c: the va_list containing the char.
 **/
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - prints an int
 * @i: the va_list containing the int.
 **/
void print_int(va_list i)
{
	printf("%i", va_arg(i, int));
}


/**
 * print_float - prints a float
 * @f: the va_list containing the float.
 **/
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - prints a string
 * @s: the va_list containing the string.
 **/
void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	printf("%s", (str == NULL) ? "(nil)" : str);
}
