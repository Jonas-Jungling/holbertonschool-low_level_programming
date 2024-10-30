#include <stdio.h>
#include "main.h"
/**
* print_array - print n elements
* description: print n elements of an array of integer
* @n: number of elements to be printed
* @a: array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d",a[i]);
		}
		else
		{
			printf("%d",a[i]);
			printf(", ");
		}

	}
	printf("\n");
}
