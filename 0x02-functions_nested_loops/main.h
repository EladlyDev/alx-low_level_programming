#include <stdio.h>

void _putchar(char c)
{
  putchar(c);
}

void print_alphabet(void)
{
  int i;
  for (i = 97; i < 123; i++)
    {
      _putchar(i);
    }
  _putchar('\n');
}
