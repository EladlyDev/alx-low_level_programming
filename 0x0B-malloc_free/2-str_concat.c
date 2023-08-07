#include "main.h"

/**
  * str_concat - concatenates two strings.
  * @s1: the string no 1
  * @s2: the string no 2
  *
  * Return: a pointer to a newly allocated space in memory
  * which contains the result, NULL on faliure
***/
char *str_concat(char *s1, char *s2)
{
	int i, j, s1_len = 0, s2_len = 0;
	char *ptc;

	if (s1)
		s1_len = strlen(s1);
	if (s2)
		s2_len = strlen(s2);
	ptc = malloc((sizeof(char) * (s1_len + s2_len)) + 1);
	if (!ptc)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		ptc[i] = s1[i];
	for (j = 0; j < s2_len; j++, i++)
		ptc[i] = s2[j];
	ptc[i + 1] = '\0';

	return (ptc);
}
