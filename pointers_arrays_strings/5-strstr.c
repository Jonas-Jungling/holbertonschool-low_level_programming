#include "main.h"
#include <stddef.h>

/**
* *_strstr - locates a substring
* description: locate a substring
* @haystack: string to explore
* @needle: substring
* Return: beginning of the located substring, or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			while (needle[i] != '\0' && haystack[i] == needle[i])
			{
				i++;
			}
			if (needle[i] == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
