#include "main.h"
#include <stddef.h>

/**
* *_strpbrk - search a string
* description: search a string for any of a set of bytes
* @s:string  where to look for
* @accept: character to found
* Return: pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	s++;
	}
	return (NULL);
}
