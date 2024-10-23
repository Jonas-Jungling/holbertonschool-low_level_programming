#include "main.h"
#include <ctype.h>
/**
* _islower - Entry point
* description: Check for lowercase character
*@c: The character to check
* Return: always 0
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
