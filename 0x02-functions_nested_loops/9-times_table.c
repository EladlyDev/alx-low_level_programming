#include "main.h"
#include <stdio.h>
/*
 * This function prints the 9 times table, starting with 0.
 */void times_table(void)
 {
   int n, mb;
   
   for (mb = 0; mb < 10; mb++)
   {
       for (n = 0; n < 10; n++)
       {
           int result = mb * n;
           
           if (n == 0)
           {
              printf("%d", result);
           }else
           {
               printf(",%3d", result);
           }
       }
       _putchar('\n');
   }
 }
