#include "main.h"

/**
* search - search square
* description: find the square root of a number
* @n: root to find
* @x: number to multiply by itself
* Return: value or -1
*/


int search(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
return (search(n, x + 1));
}

/**
* _sqrt_recursion - natural square root of a number
* description: returns the natural square root of a number.
* @n: int to calculate
* Return: natural square root of a number.
*/

int _sqrt_recursion(int n)
{
	return (search(n, 1));
}
