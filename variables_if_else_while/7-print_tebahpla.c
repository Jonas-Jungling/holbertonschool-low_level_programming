#include <stdio.h>
/**
* main - Entry point
* Description:  print all single digit numbers of base 10
* Return: always 0
*/
int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
{
	putchar(a);
}
	putchar('\n');
	return (0);
}

