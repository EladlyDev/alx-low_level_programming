#include "main.h"

size_t _strlen(const char *str);

/**
 * append_text_to_file - apends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on faliure.
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}

/**
 * _strlen - gets the length of a string.
 * @str: the string.
 *
 * Return: the length of the string.
 **/
size_t _strlen(const char *str)
{
	size_t len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}
