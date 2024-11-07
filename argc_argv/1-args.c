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
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}