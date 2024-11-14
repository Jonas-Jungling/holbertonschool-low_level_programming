#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_calloc - Allocates memory for an array of elements and initializes it to 0
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Description:
 * The _calloc function allocates memory for an array of nmemb elements,
 * each of size bytes. The allocated memory is initialized to zero.
 * If nmemb or size is 0, or if the memory allocation fails, the function
 * returns NULL.
 *
 * Return:
 * A pointer to the allocated memory, or NULL if the allocation fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *mem_total;
	char *byte_ptr;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	total_size = nmemb * size;

	mem_total = malloc(total_size);
	if (mem_total == NULL)
		return (NULL);

	byte_ptr = mem_total;

	for (i = 0; i < total_size; i++)
	{
		byte_ptr[i] = 0;
	}

	return (mem_total);

}
