#include "main.h"

/**
  * string_nconcat - concatenates two strings.
  * @s1: string one
  * @s2: string two
  * @n: the number of bytes from string two
  *
  * Return: a pointer to a newly allocated space in memory, containig @n1
  * and the @n bytes  of @s2, NULL on failure
***/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, s1_len, s2_len;
	char *ptc; /* pointer to the new string */

	/* if s1, s2 is NULL, treat them as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* getting the length of two strings */
	s1_len = strlen(s1);
	s2_len = n > strlen(s2) ? strlen(s2) : n;

	/* allocating memory for the new string */
	ptc = malloc(sizeof(*ptc) * (s1_len + s2_len) + 1);
	if (!ptc)
		return (NULL);

	/* filling the date */
	for (i = 0; i < s1_len; i++)
		ptc[i] = s1[i];
	for (j = 0; j < s2_len; j++, i++)
		ptc[i] = s2[j];
	ptc[i] = '\0';

	return (ptc);

}
