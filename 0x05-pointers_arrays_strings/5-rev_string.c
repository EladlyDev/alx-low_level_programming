#include "main.h"
/*
   * This function reverses a string.
   */void rev_string(char *s)
{
	int i = 0, count = 0;
	int t = 0;
	char tmp;
	/* "My School" */
	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	for (i = 0; count >= i; count--, i++)
	{
		if (s[count] != '\0')
		{
			tmp = s[t];
			s[t] = s[count];
			s[count] = tmp;
			t++;
		}
	}
}
