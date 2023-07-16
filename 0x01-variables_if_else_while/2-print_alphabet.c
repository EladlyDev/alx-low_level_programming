#include <stdio.h>

/*
*The entry point again
*/int main(void)
{
int i;
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
int alpha_size = (sizeof(alpha) / sizeof(alpha[0]) - 1);

for (i = 0; i < alpha_size; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
