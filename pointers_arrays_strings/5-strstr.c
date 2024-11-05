#include "main.h"
#include <stddef.h>

/**
* *_strstr - locates a substring
* description: locate a substring
* @haystack: 
* @needle:
* Return:
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
