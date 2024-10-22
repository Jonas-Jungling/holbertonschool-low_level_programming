#include <stdio.h>
/**
* main - Entry point
* Description:  print the alphabet in lowercase then in uppercase
* Return: always 0
*/
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a' ; lower <= 'z' ; lower++)
{
	putchar(lower);
}
	for (upper = 'A' ; upper <= 'Z' ; upper++)
{
	putchar(upper);
}
	putchar('\n');
	return (0);
}

