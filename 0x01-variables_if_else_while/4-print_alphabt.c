#include <stdio.h>

/*
 *entry point, yeah
 */int main(void)
{
char alpha[] = "abcdfghijklmnoprstuvwxyz";
int alpha_size = sizeof(alpha) / sizeof(alpha[0]) - 1;
int i;
for (i = 0; i < alpha_size; i++)
{
if (!(alpha[i] == 'q' || alpha[i] == 'e'))
{
putchar(alpha[i]);
}
}
putchar('\n');
return (0);
}
