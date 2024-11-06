#include "main.h"
#include <stdio.h>
/**
* print_diagsums - print sum
* description: print the sum of the two diagonals of integers
* @a: Pointer to the first element
* @size: The size of the square matrix
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum_main = 0;
	int sum_secondary = 0;

	for (i = 0; i < size; i++)
	{
		sum_main += a[i * (size + 1)];
		sum_secondary += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum_main, sum_secondary);
}
