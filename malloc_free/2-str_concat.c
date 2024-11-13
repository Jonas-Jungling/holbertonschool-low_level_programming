#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - return a pointer
 * Description: contain the contents of s1, followed by s2, and null terminated
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or pointer to the concatenates strings
*/

char *str_concat(char *s1, char *s2)
{
	int length_s1;
	int length_s2;
	char *s_concat;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);

	s_concat = malloc((length_s1 + length_s2 + 1) * sizeof(char));

	if (s_concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length_s1; i++)
	{
		s_concat[i] = s1[i];
	}

	for (j = 0; j < length_s2; j++)
	{
		s_concat[i + j] = s2[j];
	}

	s_concat[i + j] = '\0';

	return (s_concat);
}

