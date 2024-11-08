#include <stdlib.h>
#include <stdio.h>

/**
 * main - C programm
 * Description:   program that multiplies two numbers.
 * @argc:  number of command line arguments
 * @argv:  program command line arguments
 * Return: value 0
*/

int main(int argc, char *argv[])
{
	int i = 0;
	int product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
	}
		printf("%d\n", product);
		return (0);
}
