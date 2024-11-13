#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid - return a pointer
 * Description: return a pointer to a 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: NULL or pointer
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width <= 0)
	{
		return (NULL);
	}
	else if (height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int *));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
