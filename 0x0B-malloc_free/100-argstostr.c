#include "main.h"

/**
  * argstostr - concatenates all the arguments of your program
  * @ac: the length of the arguments
  * @av: the arguments
  *
  * Return: a pointer to a new string, or NULL if it fails
***/

char *argstostr(int ac, char **av)
{
	int i, k, total_len = 0;
	char *ptc;
	unsigned long int j;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
			total_len++;
		++total_len;
	}
	ptc = malloc((sizeof(char) * total_len) + 1);
	if (!ptc)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++, k++)
			ptc[k] = av[i][j];
		ptc[k] = '\n';
		++k;
	}
	ptc[++k] = '\0';

	return (ptc);
}
