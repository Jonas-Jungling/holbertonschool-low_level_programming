#include "main.h"
/**
* *_strcat - append string to another
* description: append src string to dest string
* @src: source string
* @dest: destination string
* Return: resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (dest[length] != '\0')
	{
		length++;
	}


	while (src[i] != '\0')
	{
		dest[length] = src[i];
		length++;
		i++;
	}

	dest[length] = '\0';

	return (dest);
}
