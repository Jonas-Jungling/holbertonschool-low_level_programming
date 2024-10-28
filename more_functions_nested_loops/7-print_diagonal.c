#include "main.h"
/**
* print_diagonal - function that draw
* Description: draw a diagonal line
* @n: line to draw
* Return: 0
*/

void print_diagonal(int n)
{
	int diag;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (diag = 0; diag < n; diag++)
		{
			for (space = 0 ; space < diag ; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
