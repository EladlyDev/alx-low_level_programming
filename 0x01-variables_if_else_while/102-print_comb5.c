#include <stdio.h>
/*
 *Entry Point
 */int main(void)
 {
   int i, j, p, r;

   for (i = 48; i < 58; i++)
     {
       for (j = 48; j < 58; j++)
	 {
	   for(p = 48; p < 58; p++)
	     {
	       for(r = 48; r < 58; r++)
		 {
		   putchar(i);
		   putchar(j);
		   putchar(32);
		   putchar(p);
		   putchar(r);
		   if (r != 57)
		     {
		       putchar(44);
		       putchar(32);
		     }
		 }
	     }
	 }
     }
   putchar('\n');
   return (0);
 }
