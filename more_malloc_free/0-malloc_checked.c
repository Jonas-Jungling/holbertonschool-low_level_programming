#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *malloc_checked - return a pointer
 * Description: Return a pointer to the allocated memory
 * @b: size of memory
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		_putchar('9');
		_putchar('8');
	}
	return (mem);
}
