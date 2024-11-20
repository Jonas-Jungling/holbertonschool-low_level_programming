#include <stdio.h>
#include "3-calc.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	int (*ptr_op)(int, int) = get_op_func(argv[2]);

	if (ptr_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

}
