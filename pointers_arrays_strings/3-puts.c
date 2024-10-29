#include "main.h"
#include <stdio.h>
/**
* _puts - function that print a string
* description: print a string followed by a new line to stdout
* @str: string to print
*/

void _puts(char *str)
{
	for (; *str != '\0' ; str++)
	{
		_putchar(*str);
	}
		_putchar('\n');
}
