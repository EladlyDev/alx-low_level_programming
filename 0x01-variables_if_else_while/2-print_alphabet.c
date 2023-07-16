#include <stdio.h>

/*
*The entry point again
*/int main(void)
{
int i;
char alpha[] = "abcdefghijklmnopqrstuvwxyz";

while (i < 26)
{
putchar(alpha[i]);
i++;
}
putchar('\n');
return (0);
}
