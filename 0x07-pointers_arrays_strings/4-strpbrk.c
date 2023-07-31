#include "main.h"

/**
  * _strpbrk - This function search for a set of characters in str
  * @s: the string to search in
  * @c: the characters to search for
  *
  * Return: a pointer to the byte in s that matches one
  * of the bytes in accept, or NULL if no such byte is found
  */

char *_strpbrk(char *s, char *c)
{
	int i, j, base;

	for (i = 0; s[i] != '\0'; i++)
	{
		base = 0;
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
			{
				base++;
			}
		}
		if (base > 0)
		{
			return (&s[i]);
		}
	}
	return (0);
}
