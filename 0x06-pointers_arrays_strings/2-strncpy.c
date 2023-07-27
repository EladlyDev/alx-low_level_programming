#include "main.h"
int _strlen(char *);
/**
 * _strncpy - This function copies a string,
 * it works exactly like strncpy function
 * @dest: the destination to copy to
 * @src: the source string
 * @n: the bytes number
 *
 * Return: pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len = _strlen(src);
/*	int dest_len = _strlen(dest);*/
	int i;

	if (n > src_len)
		n = src_len;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[(src_len * 2) + 1] = '\0';
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
