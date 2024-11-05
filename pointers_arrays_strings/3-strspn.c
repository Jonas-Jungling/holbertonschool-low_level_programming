#include "main.h"

/**
* _strspn - length of a prefix substring
* description: get the length of a prefix substring
* @s: string to be scanned.
* @accept: string containing the characters to match.
* Return: the number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, match;

	while (*s)
	{
		match = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				match = 1;
				count++;
				break;
			}
		}

		if (!match)
		break;
		s++;
	}

	return (count);
}
