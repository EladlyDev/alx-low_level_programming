#include "main.h"

/**
  * _strchr - This function returns a pointer to the first
  * occurrence of the character @c in the string @s
  * or NULL if the character is not found
  * @s: the string to search in
  * @c: the character to search for
  *
  * Return: a pointer to the first occurrencce, or NULL if no result
  */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
		if (*s == c)
			return (s);
	}

	return (NULL);
}
