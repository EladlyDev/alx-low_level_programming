#ifndef main_h
#define main_h

/* Standard Libiraries */
#include <stddef.h>
#include <string.h>

/* function's declarations from outer files */
int _putchar(char c);
char *_memset(char *, char, unsigned int);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);

#endif
