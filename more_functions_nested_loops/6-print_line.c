#include "main.h"
/**
* print_line - Entry point
* Description: draw a straight line
* @n: number of the line
* Return: 0
*/

void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
