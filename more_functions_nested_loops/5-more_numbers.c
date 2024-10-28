#include "main.h"
/**
* more_numbers - Entry point
* Description: print 10 times the numbers from 0 to 14
* Return: 0
*/

void more_numbers(void)
{
	int t;
	int n;

		for (t = 0 ; t < 10 ; t++)
		{
			for (n = 0 ; n < 15 ; n++)
			{
				if (n > 9)
				{
					_putchar(n / 10  + '0');
				}
				_putchar(n % 10 + '0');
			}
			_putchar('\n');
		}
}
