#include "main.h"
/*
   * This function returns the length of a string.
   */int _strlen(char *s)
{
	int count, i;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
