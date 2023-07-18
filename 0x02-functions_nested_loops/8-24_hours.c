#include "main.h"
/*
 * This function prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59;
 */void jack_bauer(void)
{
int ms, s, m, h;

for (h = 48; h < 51; h++)
{
for (m = 48; m < 58; m++)
{
if (h == 50 && m == 52)
{
break;
}
for (s = 48; s < 54; s++)
{
for (ms = 48; ms < 58; ms++)
{
_putchar(h);
_putchar(m);
_putchar(58);
_putchar(s);
_putchar(ms);
_putchar('\n');
}
}
}
}
}
