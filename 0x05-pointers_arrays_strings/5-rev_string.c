#include "main.h"
/*
   * This function reverses a string.
   */void rev_string(char *s)
{
	int i = 0, count = 0;
	int t = 0;

	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	for (i = 0; count >= i; count--)
	{
		if (s[count] != '\0')
		{
			s[t] = s[count];
			t++;
		}
	}
}
