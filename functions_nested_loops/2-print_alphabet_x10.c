#include "main.h"
/**
* print_alphabet_x10 - Entry point
* description: print alphabet in lowercase 10 times
* Return: always 0
*/

void print_alphabet_x10(void)
{
	char alphabet;
	int n;

	for (n = 1 ; n < 11 ; n++)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
	_putchar('\n');
	}
}
