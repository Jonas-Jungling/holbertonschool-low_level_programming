#include "main.h"

/**
* *leet - encode a string
* description: encode a string into 1337
* @s: string to encode
* Return: string encoding
*/

char *leet(char *s)
{
	int i, j;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_replacements[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == leet_chars[j])
			{
				s[i] = leet_replacements[j];
				break;
			}
		}
	}

	return (s);
}

