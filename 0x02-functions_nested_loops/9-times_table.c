#include "main.h"
#include <stdio.h>
/*
 * This function prints the 9 times table, starting with 0.
 */void times_table(void)
{
int n, mb;

for (mb = 0; mb < 10; mb++)
{
for (n = 0; n < 10; n++)
{
int sum = n * mb;
if (n == 0)
printf("%d,", sum);

else if (n == 9)
{
printf("%3d\n", sum);
}
else
{
printf("%3d,", sum);
}
}
}
}
