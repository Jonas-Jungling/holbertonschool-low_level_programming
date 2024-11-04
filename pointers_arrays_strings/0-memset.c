#include "main.h"

/**
* *_memset - fill memory
* description: fill memory with a constant byte
* @s: starting adress of memory
* @b: value to be filled
* @n: number of octet
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
