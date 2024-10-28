#include "main.h"
#include <ctype.h>
/**
* _isupper - Entry point
* description: Check for uppercase character
* @c: character to check
* Return: 1 if c is uppercase 0 otherwise
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
