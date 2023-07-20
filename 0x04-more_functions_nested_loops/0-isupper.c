#include "main.h"
/*
   * This function checks for uppercase character
*/
int _isupper(char c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
