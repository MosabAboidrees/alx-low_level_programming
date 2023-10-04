#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a function that returns a pointer
 * to a 2D array of integers.
 * @width: The grid width.
 * @height: The grid height.
 * Return: A pointer to the newly allocated 2D arrayd of integers,
 * if width or height is 0 or negative or there is failure return NULL.
*/
int **alloc_grid(int width, int height)
{
	/*a pointer to a pointer for the 2D arry*/
	int **Arr2D, h_idx, w_idx, PAMIdx;

	/*if width or height is 0 or negative return NULL*/
	if (width <= 0 || height <= 0)
		return (NULL);
	/* Allocate memory for the rows of the 2D array */
	Arr2D = malloc(height * sizeof(int *));
	/* If memory allocation failed, return NULL*/
	if (Arr2D == NULL)
		return (NULL);
	/* Allocate memory for the columns of the 2D array and initialize to 0*/
	for (h_idx = 0; h_idx < height; h_idx++)
	{
		Arr2D[h_idx] = malloc(width * sizeof(int));
		/* If memory allocation failed, return NULL*/
		if (Arr2D[h_idx] == NULL)
		{
			/* Free previously allocated memory (PAM) to avoid memory leaks*/
			for (PAMIdx = 0; PAMIdx < h_idx; PAMIdx++)
			{
				free(Arr2D[PAMIdx]);
			}
			free(Arr2D);
			return (NULL);
		}
		/* Initialize each element of the 2D arry to 0*/
		for (w_idx = 0; w_idx < width; w_idx++)
		{
			Arr2D[h_idx][w_idx] = 0;
		}
	}
	return (Arr2D);  /*a pointer to the allocated and initialized 2D array*/
}
