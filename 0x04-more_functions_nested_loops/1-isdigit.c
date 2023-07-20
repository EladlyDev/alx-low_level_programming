#include "main.h"
/*
 * This function checks for for a digit(0 through 9)
 */int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
