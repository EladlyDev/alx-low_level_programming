#include "main.h"
/*
 * This function prints the last digit of an integer
 */int  print_last_digit(int n)
{
int ld = n % 10;
int ld_abs = ld < 0 ? ld * -1 : ld;
int ld_ascii = '0' + ld_abs;

_putchar(ld_ascii);
return (ld_abs);
}
