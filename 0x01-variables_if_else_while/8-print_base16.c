#include <stdio.h>
/*
 *Entry point
 */int main(void)
{
int i = 48;

while (i < 103)
{
if (!(i > 57 && i < 97))
{
putchar(i);
}
i++;
}
putchar('\n');
return (0);
}
