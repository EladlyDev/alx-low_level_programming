#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_
/* Standard Libraries */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* Functions's Prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);

/* Structures */
typedef struct type
{
	char c;
	void (*f)(va_list);
}type_t;

#endif /* _VARIADIC_FUNCTIONS_ */
