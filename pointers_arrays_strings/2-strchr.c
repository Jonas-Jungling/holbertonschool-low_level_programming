#include "main.h"
#include <stddef.h>

/**
* *_strchr - locate character
* description: locate a character in a string
* @s: represent a given string.
* @c: refers to specific character to be searched in a given string.
* Return: pointer to the first occurrence or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
