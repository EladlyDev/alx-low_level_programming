#include <stdio.h>
/*
 *entry point
 */int main(void)
{
int i = 0;
while (i < 10)
{
putchar(48 + i);
i++;
}
putchar('\n');
return (0);
}
