#include <stdio.h>
void main(void)
{
	int i = 0, count = 1;
	int t = 0;
	char s[] = "My School";
       /* "My School" */
       while (s[i] != '\0')
      {
          i++;
          count++;
      }
	   printf("count: %d, i: %d\n", count, i);
      for (i = 0; count >= i; count--)
      {   
          if (s[count] != '\0')
          {   
              s[t] = s[count];
              t++;
       		putchar(s[count]);
		  }
      }
	  putchar(10);
}
