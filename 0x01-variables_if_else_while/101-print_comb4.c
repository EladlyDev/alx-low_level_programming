#include <stdio.h>
/*
 *Entry Point
 */int main(void)
{
int i = 48;
int j;
int p;

while (i < 58)
{
for (j = i + 1; j < 58; j++)
{
for (p = j + 1; p < 58; p++)
{
putchar(i);
putchar(j);
putchar(p);
if (!(i == 55))
{
putchar(44);
putchar(32);
}
}
}
i++;
}
putchar('\n');
return (0);
}
