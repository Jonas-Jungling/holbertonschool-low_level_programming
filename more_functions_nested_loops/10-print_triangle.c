#include "main.h"
/**
* print_triangle - print triangle
* description: print triangle
* @size: size of triangle
*/

void print_triangle(int size)
{
	int h;
	int hash;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 1 ; h <= size; h++)
		{
			for (space = 0 ; space < size - h ; space++)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < h; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
