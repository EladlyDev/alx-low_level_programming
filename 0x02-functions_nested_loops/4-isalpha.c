#include "main.h"
/*
 * This function checks if character is alpha or not
 */int _isalpha(char c)
{
if ((c > 64 && c < 91) || (c > 96 && c < 123))
{
return (1);
}
else
{
return (0);
}
}
