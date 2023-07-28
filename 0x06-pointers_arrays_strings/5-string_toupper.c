#include "main.h"
#include <string.h>
void range(int *, int, int);
/*
  * string_toupper - This function changes all lowercase to uppercase
  * @src - the source string
  *
  * Return : a pointer to the result
 **/char *string_toupper(char *src)
{
	int a_cap[26];
	int a_low[26];
	int src_len = strlen(src);
	int i, j;

	range(a_cap, 65, 90);
	range(a_low, 97, 122);

	for (i = 0; i < src_len; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (src[i] == a_low[j])
				src[i] = a_cap[j];
		}
	}
	return (src);
}



/*
   */void range(int *a, int s, int e)
{
	int i = 0;

	for (; s <= e; s++)
	{
		a[i] = s;
		i++;
	}
}
