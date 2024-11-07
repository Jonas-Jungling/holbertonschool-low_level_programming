#include <stdlib.h>
#include <stdio.h>

/**
 * main - C programm
 * Description:  programm that prints its name
 * @argc:  number of command line arguments
 * @argv:  program command line arguments
 * Return: value 0
*/

int main(int argc, char *argv[])
{
	int i = 0;
	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}