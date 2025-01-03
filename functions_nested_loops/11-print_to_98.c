#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98,
 *               followed by a new line.
 * @n: The starting integer.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
}
