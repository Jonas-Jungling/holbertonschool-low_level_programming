#include "main.h"

/**
* search - search square
* description: find the square root of a number
* @n: number to check
* @x: potential divisor of the number n
* Return: 1
*/

int search(int n, int x)
{
	if (n <= 1)
		return (0);
	if (x * x > n)
		return (1);
	if (n % x == 0)
		return (0);
	return (search(n, x + 1));
}


/**
* is_prime_number - find prime number
* description:  return 1 if the input integer is a prime number, or return 0.
* @n: number to search
* Return: 1 or 0
*/

int is_prime_number(int n)
{
	return (search(n, 2));
}
