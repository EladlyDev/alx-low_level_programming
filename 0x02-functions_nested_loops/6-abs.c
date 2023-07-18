#include "main.h"
/*
 * This function prints the absolute of a number--its distance from zero
 */int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
int abs = n * -1; /*change it to be positive*/
return (abs);
}
}
