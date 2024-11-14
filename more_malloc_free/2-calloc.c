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

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	total_size = nmemb * size;

	mem_total = malloc(total_size);
	if (mem_total == NULL)
		return (NULL);

	memset(mem_total, 0, total_size);

	return (mem_total);

}
