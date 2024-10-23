#include<stdio.h>
/**
* main - Entry point
* Description: print all possible combinations of single-digit numbers
* Return: always 0
*/
int main(void)
{
	char digit;

	for (digit = 0 ; digit < 10 ; digit++)
{
	putchar('0' + digit);
	putchar(',');
	putchar(' ');
}
	putchar('\n');
	return (0);
}
