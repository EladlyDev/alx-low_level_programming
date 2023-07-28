#include "main.h"
#include <string.h>
/**
  * leet - This function encodes a string into 1337
  * @src: the source string
  *
  * Return: a pointer to the result
***/

char *leet(char *src)
{
    char a_low[5] = {'a', 'e', 'o', 't', 'l'};
	char a_upp[5] = {'A', 'E', 'O', 'T', 'L'};
	int a_num[5] = {4, 3, 0, 7, 1};
	int src_len = strlen(src);
	int i, j;

	for (i = 0; i < src_len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (src[i] == a_low[j] || src[i] == a_upp[j])
				src[i] = a_num[j];
		}
	}
	return (src);
}
