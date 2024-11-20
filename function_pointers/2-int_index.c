#include "function_pointers.h"
#include "stddef.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array of integers to search through.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function to be used.
 *
 * Return: The index of the first element for which the comparison function
 *         does not return 0.
 *         If no element matches, or if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	return (-1);

	else if (cmp == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{

		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
