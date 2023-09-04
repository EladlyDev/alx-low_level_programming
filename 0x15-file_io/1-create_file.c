#include "main.h"

size_t _strlen(const char *str);

/**
 * create_file - creates a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on faliure.
 **/
int create_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR + S_IWUSR);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	write(file, text_content, _strlen(text_content));

	close(file);
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
