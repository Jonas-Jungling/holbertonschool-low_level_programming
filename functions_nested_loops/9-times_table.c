#include "main.h"
/**
* times_table - Entry point
* description: Print the 9 times table, starting with 0
* Return: always 0
*/

void times_table(void)
{
	int table;
	int result;

	for (table = 0; table < 10 ; table++)
	{
		for (result = 0; result < 10 ; result *= table)
		{
			if (result < 10)
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
			}	_putchar(' ');
			_putchar('\n');
		}
	}
}
