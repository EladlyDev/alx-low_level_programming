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
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
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
