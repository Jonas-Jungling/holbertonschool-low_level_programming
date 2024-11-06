#include "main.h"
/**
* factorial - the factorial of given number
* description: return the factorial of a given number.
* @n: int to calculate
* Return: factorial of given number
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
