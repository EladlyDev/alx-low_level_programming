#include "main.h"

void error(int, const char *, int);

/* Error Macros */
#define USAGE 97
#define IN 98
#define OUT 99
#define CLOSE 100

/**
 * main - entry point for a program that copies the content of a file to other.
 * @ac: the number of arguments passed to the program.
 * @av: the list of arguments.
 *
 * Return: 0 on success, 97, 98, 99, 100 on errors.
 **/
int main(int ac, char **av)
{
	int in, out, len = 1;
	char *in_path, *out_path, buff[1024];

	if (ac != 3)
		error(USAGE, NULL, 0);

	in_path = av[1];
	out_path = av[2];

	in = open(in_path, O_RDONLY);
	if (in == -1)
		error(IN, in_path, 0);
	out = open(out_path, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (out == -1)
		error(OUT, out_path, 0);

	do {
		len = read(in, buff, 1024);
		if (len == -1)
			error(IN, in_path, 0);
		write(out, buff, len);
	}
		while (len > 0)
			;

	if (close(in) == -1)
		error(CLOSE, NULL, in);
	if (close(out) == -1)
		error(CLOSE, NULL, out);

	return (0);
}

/**
 * error - error handler for the cp program.
 * @type: the type of error accurred.
 * @filename: the file name to append in the error message, if there.
 * @descriptor: the file descriptor to append in the err message, when needed.
 **/
void error(int type, const char *filename, int descriptor)
{
	if (type == USAGE)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	else if (type == IN)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	else if (type == OUT)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	else
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", descriptor);

	exit(type);
}
