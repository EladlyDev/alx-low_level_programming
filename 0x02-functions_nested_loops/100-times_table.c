#include "main.h"
#include <stdio.h>
/*
 * This function prints the n times table, starting with 0
 */void print_times_table(int i)
{
if (i < 15 && i > 0)
{
int n, mb;

for (mb = 0; mb <= i; mb++)
{
for (n = 0; n <= i; n++)
{
int sum = n * mb;
if (n == 0)
printf("%d,", sum);

else if (n == i)
{
printf("%4d\n", sum);
}
else
{
printf("%4d,", sum);
}
}
}
}
if (i == 0)
{
printf("%d\n", i);
}
}
