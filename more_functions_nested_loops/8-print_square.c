#include "main.h"
/**
* print_square - function that print square
* Description: print a square
* @size: size of square
* Return: 0
*/

void print_square(int size)
{
	int n;
	int line;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0 ; line < size ; line++)
		{
			for (n = 0 ; n < size ; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
