#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - frees a 2 dimensional grid
 * Description: frees a 2 dimensional grid previously created by
 * alloc_grid function
 * @grid: grid
 * @height: height
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
