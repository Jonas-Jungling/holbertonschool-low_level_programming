#include "main.h"
#include <stdlib.h>

/**
* *string_nconcat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* @n: The number of bytes from s2 to concatenate to s1.
*
* Description: The returned pointer shall point to a newly allocated space
* in memory, which contains s1, followed by the first n bytes of s2, and
* null terminated. If the function fails, it should return NULL.
*
* Return: A pointer to the newly allocated space in memory containing the
* concatenated strings, or NULL if the function fails.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1 = 0, length_s2 = 0, i = 0, j = 0;

	char *s_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length_s1] != '\0')
	{
		length_s1++;
	}

	while (s2[length_s2] != '\0')
	{
		length_s2++;
	}

	if (n >= length_s2)
	{
		n = length_s2;
	}
	s_concat = malloc(length_s1 + n + 1);

	if (s_concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s_concat[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		s_concat[i + j] = s2[j];
	}

	s_concat[i + j] = '\0';

	return (s_concat);
}
