#include <stdio.h>
/*
*Main, Entry point
*/int main(void)
{
  char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int alpha_size = sizeof(alpha)/sizeof(alpha[0]) - 1;
  int i = 0;

  while (i < alpha_size)
    {
      putchar(alpha[i]);
      i++;
    }
  putchar('\n');
  return(0);
}
