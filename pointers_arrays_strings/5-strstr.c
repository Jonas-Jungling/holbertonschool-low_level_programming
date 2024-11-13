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
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
