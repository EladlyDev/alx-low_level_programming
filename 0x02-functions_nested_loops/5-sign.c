#include "main.h"
/*
 * This function checks if a number greater than 0 and returns 1 and
 * prints +. if less than 0 returns -1 and prints -. if equals 0 retu
 * rns 0 and prints 0
 */int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
