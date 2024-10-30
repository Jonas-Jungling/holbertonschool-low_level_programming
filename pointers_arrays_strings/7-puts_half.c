#include "main.h"
/**
* puts_half - half of string
* description: print half of string
* @str: string to print
*/

void puts_half(char *str)
{
	int length = 0;
	int half;
	int n;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length + 1) / 2;
	}

	for (n = half ; str[n] != '\0' ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
