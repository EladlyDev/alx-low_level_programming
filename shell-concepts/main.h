#ifndef _MAIN_H
#define _MAIN_H


/* Structures */
/**
 * struct node - node in a linked list.
 * @value: the value
 * @next: the next node
 **/
typedef struct node_s
{
	char *value;
	struct node_s *next;
} node_t;


/* Local Variables */
extern char **environ;

/* Standard Libraries */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <sys/stat.h>

/* Prototypes */
int print_path(void);
node_t *new_node(node_t **, char *);
node_t *link_path(void);

#endif /* _MAIN_H */
