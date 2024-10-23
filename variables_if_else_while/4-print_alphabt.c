#include <stdio.h>
/**
* main - Entry point
* Description:  print the alphabet in lowercase except q and e
* Return: always 0
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
{
	if (alphabet == 'e')
{
	continue;
}
	else if (alphabet == 'q')
{
	continue;
}
	else
{
	putchar(alphabet);
}
}
	putchar('\n');
	return (0);
}

