#include <stdio.h>
/*                                                              
 *Entry Point                                                   
 */int main(void)
 {
   int i, j, p, r;

   for (i = 48; i < 58; i++)
     {
       for (j = i == 0 ? 49 : 48; j < 58; j++)
         {
           for(p = i == 0 ? 49 : 48; p < 58; p++)
             {
               for(r = j == 0 ? 49 : 48; r < 58; r++)
                 {
                   putchar(i);
                   putchar(j);
                   putchar(32);
                   putchar(p);
                   putchar(r); 
                   if(!(i == 57 && j == 57 && p == 57 && r == 5\
7))
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
