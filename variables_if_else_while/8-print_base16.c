#include <stdio.h>
/**
* main - Entry point
* Description:  print all numbers of base 16 in lowercase
* Return: always 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
{
	int digit = n % 16;

	if (digit < 10)
	putchar(digit + '0');
	else
	putchar(digit - 10 + 'a');
}
	putchar('\n');

	return (0);
}
