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
	char *ptr;

	while (src[length] != '\0')
	{
		length++;
	}

	ptr = dest + length;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
