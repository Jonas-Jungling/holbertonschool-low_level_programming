#include "main.h"
#include <string.h>
/**
* _strlen - return the length
* description: return the length of a string
* @s: string to check
* Return: the length
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
