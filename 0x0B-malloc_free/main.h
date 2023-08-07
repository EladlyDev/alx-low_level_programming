#ifndef main_h
#define main_h

/* Standar libraries */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Functions */
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);

#endif
