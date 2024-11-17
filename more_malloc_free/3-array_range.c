#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Description: This function allocates memory for an array of integers
 * containing all the values from min (included) to max (included), ordered
 * from min to max. If min is greater than max, the function returns NULL.
 * The caller is responsible for freeing the allocated memory.
 *
 * Return: A pointer to the newly created array, or NULL if min > max or if
 * memory allocation fails.
 */
int *array_range(int min, int max)
{
	int i = 0;
	int size;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
