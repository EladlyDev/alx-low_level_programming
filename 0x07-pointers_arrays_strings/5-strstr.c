#include "main.h"

/**
  * _strstr - This function locates a substring.
  * @s: the string to search in
  * @sub: the substring to search for
  *
  * Return: a pointer to the begining of the located substring.
  */

char *_strstr(char *s, char *sub)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sub[j] != '\0'; j++)
		{
			if (sub[j] != s[i + j])
				break;
		}
		if (!sub[j])
			return (&s[i]);
	}
	return (0);
}
