#include "main.h"
int _strlen(char *);
/**
 * _strncat - This function concatenates two strings,
 * like strcat, but the difference is that
 * it returns n bytes from the src and src does
 * not need to be null-terminated if it contains n or more bytes
 * If n bytes are larger than the src's bytes, get to the end.
 * @src: the source string
 * @dest: the destination
 * @n: the number of bytes to conctaenate from src
 *
 * Return: a pointer to the result
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);
	int i;

	if (n > src_len)
		n = src_len;

	for (i = 0; i < n; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}



/**
 * _strlen - This function gets the length of a string
 * Return: the length
 * @src: the string
 */

int _strlen(char *src)
{
	int i, len;

	i = len = 0;
	while (src[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
