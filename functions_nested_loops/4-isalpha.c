#include "main.h"
#include <ctype.h>
/**
* _isalpha - Entry point
* description: Check for alphabetic character
*@c: The character to check
* Return: always 0 or 1
*/

int _isalpha(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
