#include "main.h"
/**
* *_strcpy - copy the string pointed
* description: copies the string pointed, including the terminating null byte
* @src: source
* @dest: destination
* Return: dest value
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
