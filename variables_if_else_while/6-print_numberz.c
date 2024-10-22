#include <stdio.h>
/**
* main - Entry point
* Description:  print all single digit numbers of base 10
* Return: always 0
*/
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
{
	putchar('0' + n);
}
	putchar('\n');
	return (0);
}
