#include "main.h"
/**
* print_most_numbers - Entry point
* Description: print the numbers from 0 to 9 except 2 and 4
* Return: 0
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		if (n == 2)
		{
			continue;
		}
		else if (n == 4)
		{
			continue;
		}
		else
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
