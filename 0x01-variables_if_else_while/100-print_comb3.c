#include <stdio.h>
/*
 *Entry point
 */int main(void)
{
int i = 48;
int j;

while (i < 58)
{
for (j = i + 1; j < 58; j++)
{
putchar(i);
putchar(j);
if (!(i == 56))
{
putchar(44);
putchar(32);
}
}
i++;
}
putchar('\n');
return (0);
}
