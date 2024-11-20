#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - check the code
* @argc: The number of command-line arguments
* @argv: An array of command-line arguments
*
* Return: Always 0.
*/
int main(int argc, char **argv)
{
	int a;
	int b;
	int result;
	int (*ptr_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	ptr_op = get_op_func(argv[2]);

	if (ptr_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = ptr_op(a, b);
	printf("%d\n", result);
	return (0);

}
