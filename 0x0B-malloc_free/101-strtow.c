#include "main.h"
int aforchar(char **ptc, char *str);
void fill(char **ptc, char *str);
/**
  * strtow - splits a string into words
  * @str: the string
  *
  * Return: a pointer to an array of strings, NULL on faliure
***/

char **strtow(char *str)
{
	unsigned int i, ispace = 1, cow = 0;
	char **ptc;
	/*-ALX---School--cisfun--goodbye*/
	if (str == NULL || strlen(str) == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			ispace = 1;
			continue;
		}
		if (ispace == 1)
			cow += 1;
		ispace = 0;
	}
	if (!cow)
		return (NULL);
	cow += 1; /* for NULL at the end of array */

	ptc = malloc(sizeof(char *) * cow);
	if (!ptc)
		return (NULL);
    /* allocate memory for characters */
	if (!aforchar(ptc, str))
		return (NULL);
	/* fill the values */
	fill(ptc, str);

	return (ptc);
}

/**
  * aforchar - allocates memory for characters only, no whitespaces
  * @ptc: pointer to characters, where we allocate memory to
  * @str: the string that we'll get the count of character from
  *
  * Return: -1 on faliure 1 on succes
  */
int aforchar(char **ptc, char *str)
{
	int i, j, ispace, coc;

	for (i = 0, j = 0, ispace = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (ispace == 0)
			{
				coc += 1;
				ptc[j] = malloc(sizeof(char) * coc);
				if (!ptc)
					for (i = 0; i < j; i++)
					{
						free(ptc[i]);
						return (-1);
					}
				++j;
				coc = 0;
			}
			ispace = 1;
			continue;
		}
		coc++;
		ispace = 0;
	}

	if (ispace == 0)
	{
		coc += 1;
		ptc[j] = malloc(sizeof(char) * coc);
		if (!ptc[j])
			for (i = 0; i < j; i++)
			{
				free(ptc[i]);
				return (-1);
			}
		++j;
		coc = 0;
	}
	return (1);
}

/**
  * fill - This function fills an allocated memory with characters
  * @ptc: a pointer to characters were we'll fill
  * @str: the string which we'll fill from
  */

void fill(char **ptc, char *str)
{
	int i, j, k, ispace;

	for (i = 0, j = 0, k = 0, ispace = 1; str[i] != '\0' ; i++)
	{
		if (str[i] == ' ')
		{
			if (ispace == 0)
			{
				ptc[j][k] = '\0';
				++j;
				k = 0;
			}
			ispace = 1;
			continue;
		}
		ptc[j][k] = str[i];
		k++;
		ispace = 0;
	}

	if (ispace == 0)
		ptc[j][k] = '\0';
	ptc[j + 1] = NULL;
}
