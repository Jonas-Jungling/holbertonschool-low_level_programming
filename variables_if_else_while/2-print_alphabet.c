#include <stdio.h>
/**
* main - Entry point
* Description:  print the alphabet in lowercase
* Return: always 0
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
{
	putchar(alphabet);
}
	return (0);
}
