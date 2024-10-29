#include "main.h"
/**
* puts2 - print evry other character
* description: prints every other character of a string, starting with the first character
* @str: string to print
*/

void puts2(char *str)
{
	int i;

	for (i=0 ; str[i] != '\0' ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
		_putchar('\n');
}
