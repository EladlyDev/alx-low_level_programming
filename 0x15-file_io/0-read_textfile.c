#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: the file to print.
 * @letters: the number of letters to print from the file.
 *
 * Return: the actual number of letters it could read and print, 0 on faliure.
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int out, lettersNo;
	char *str;

	if (filename == NULL || letters == 0)
		return (0);

	str = malloc(sizeof(char) * letters);
	out = open(filename, O_RDONLY);
	if (out == -1 || !str)
		return (0);

	lettersNo = read(out, str, letters);
	if (lettersNo == -1)
		return (0);
	write(STDOUT_FILENO, str, lettersNo);

	free(str);
	close(out);
	return (lettersNo);
}
