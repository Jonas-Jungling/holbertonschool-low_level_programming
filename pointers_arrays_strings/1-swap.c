#include "main.h"
/**
* swap_int - swap values
* description: swap the value of two integers
* @a: value to thr first integer
* @b: value to the second integer
*/

void swap_int(int *a, int *b)
{
	int temporary = 0;

	temporary = *b;
	*b = *a;
	*a = temporary;
}
