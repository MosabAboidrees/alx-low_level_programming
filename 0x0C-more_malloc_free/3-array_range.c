#include "main.h"

/**
 * array_range -  a function that creates an array of integers
 * from min to max (inclusive).
 * @min: Minimum value for the array.
 * @max: Maximum value for the array.
 *
 * Return: Pointer to the new array, otherwise NULL on failure.
 */
int *array_range(int min, int max)
{
	int *mem_arr;
	int idx, size;

	/* if minimum is greater than maximum */
	if (min > max)
		return (NULL);
	/* The size of the array */
	size = max - min + 1;
	/* Allocate memory */
	mem_arr = malloc(sizeof(int) * size);
	/* if malloc failure */
	if (mem_arr == NULL)
		return (NULL);
	/* Fill the array from minimum to maximum */
	for (idx = 0; idx < size; idx++)
	{
		mem_arr[idx] = min;
		min++;
	}
	return (mem_arr);
}

