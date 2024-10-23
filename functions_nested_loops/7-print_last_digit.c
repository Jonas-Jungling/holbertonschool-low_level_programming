#include "main.h"
/**
* print_last_digit - Entry point
* description: Print last digit of a number
*@n: number to check
* Return: last digit
*/

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}
