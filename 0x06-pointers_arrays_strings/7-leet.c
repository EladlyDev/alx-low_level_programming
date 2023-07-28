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
	char a_low[] = {'a', 'e', 'o', 't', 'l'};
	char a_upp[] = {'A', 'E', 'O', 'T', 'L'};
	char a_num[] = {'4', '3', '0', '7', '1'};
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
