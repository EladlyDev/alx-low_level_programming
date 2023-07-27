#include "main.h"
#include <string.h>
#include <stdio.h>
/*
 * _strcmp - This function compares two strings,
 * work exactly like strcmp
 * @s1: string no 1
 * @s2: string no 2
 *
 * return: 1 if s1 > s2, -1 if s1 < s2 and 0 if they are equals
 */int _strcmp(char *s1, char *s2)
{
	int i, end, result;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	result = 0;
	if (s1_len > s2_len)
		end = s1_len;
	else
		end = s2_len;

	for (i = 0; i < end; i++)
	{
		if (s1[i] > s2[i])
			result = s1[i] + s2[i];
		else if (s1[i] < s2[i])
			result = s1[i] - s2[i];
	}
	return (result);
}
