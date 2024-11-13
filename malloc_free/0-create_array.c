#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Create array
 * Description:  create an array of chars, initialize it with a specific char
 * @size: size of array
 * @c: array of char
 * Return: NULL or pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
