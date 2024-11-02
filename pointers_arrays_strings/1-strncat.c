#include "main.h"
/**
* _strncat - concatenates strings
* description: concatenate two strings
* @src: source string
* @dest: destination string
* @n: number of bytes from src
* Return: resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int length_dest = 0;
	int i = 0;

	while (dest[length_dest] != '\0')
	{
		length_dest++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[length_dest] = src[i];
		length_dest++;
		i++;
	}

	dest[length_dest] = '\0';

	return (dest);
}

