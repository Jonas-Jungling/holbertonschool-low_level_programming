#include "function_pointers.h"
#include "stddef.h"

/**
* array_iterator - Executes a function given as a parameter on each element
* of an array.
* @array: The array of integers.
* @size: The size of the array.
* @action: A pointer to the function to be used on each element of the array.
*
* description: This function iterates over each element of the array and
* applies the function pointed to by 'action' to each element.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
