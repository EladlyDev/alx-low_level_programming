#include "main.h"
#include <string.h>
/**
 * _strcpy - A function that copies a string src
 * including the '\0' to the destination dest
 * @dest: the destination
 * @src: the source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
