#include "main.h"
#include <ctype.h>
/**
* _isdigit - Entry point
* description: Check for a digit
*@c: The number to check
* Return: always 0
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
