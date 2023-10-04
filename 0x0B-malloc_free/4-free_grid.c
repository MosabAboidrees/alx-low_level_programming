#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @grid: The 2D grid to be freed.
 * @height: The height of the array.
 * Return: Nothing to return.
*/
void free_grid(int **grid, int height)
{
	int h_idx = 0;

	/* Do nothing if 2d array is NULL or height is non-positive*/
	if (grid == NULL || height <= 0)
		return;
	/* Free memory for each row of the 2D array*/
	while (h_idx < height)
	{
		free(grid[h_idx]);
		h_idx++;
	}
	/* Free memory for the array of pointers to rows*/
	free(grid);
}
