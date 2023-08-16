#include "function_pointers.h"

/**
  * print_name - This function prints a name.
  * @name: the name.
  * @f: a function decides how should the name get printed.
  **/
void print_name(char *name, void (*f)(char *))
{
	if (name[0] != '\0' && f)
		(*f)(name);
}
