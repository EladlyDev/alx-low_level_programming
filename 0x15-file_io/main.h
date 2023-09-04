#ifndef _MAIN_H
#define _MAIN_H

/* Standard Libraries */
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/* Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* _MAIN_H */
