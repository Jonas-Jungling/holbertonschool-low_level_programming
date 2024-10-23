#include <stdio.h>
/**
* main - Entry point
* description: print alphabet in lowercase
* Return: always 0
*/

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
