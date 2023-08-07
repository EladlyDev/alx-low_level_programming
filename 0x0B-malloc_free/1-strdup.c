#include "main.h"

/**
  * _strdup - duplicates a string to a newly allocated memory
  * @str: the string to copy
  *
  * Return: a pointer to the new allocated memory, or NULL if it fails
***/

char *_strdup(char *str)
{
	int i;
	char *ptc;
	int str_len;

	if (!str)
		return (NULL);
	str_len = strlen(str);
	ptc = malloc((sizeof(char) * str_len) + 1);
	if (!ptc)
		return (NULL);
	for (i = 0; i < str_len; i++)
	{
		ptc[i] = str[i];
	}
	ptc[i + 1] = '\0';

	return (ptc);
}
