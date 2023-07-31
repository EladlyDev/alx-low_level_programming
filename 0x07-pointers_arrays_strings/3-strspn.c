#include "main.h"
#include <stdio.h>
/**
  * _strspn - gets the length of a prefix substring.
  * @s1: the string no 1
  * @s2: the string no 2
  *
  * Return: number of bytes in the initial segment of s
  * which consist only of bytes from accept
  */

unsigned int _strspn(char *s1, char *s2)
{
	unsigned int i, j, base;

	for (i = 0; s1[i] != '\0'; i++)
	{
		base = 0;
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
				base++;
		}
		if (base == 0)
		{
			return (i);
		}
	}

	return (0);
}
