#include <stdlib.h>
#include "main.h"

/**
 * create_array -  a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: The size of the array to create. Must be greater than 0.
 * @c: The character to initialize the array with.
 * Return: Returns NULL if size = 0, or memory allocation fails.
*/
char *create_array(unsigned int size, char c)
{
	/* If size is 0, return NULL */
	if (size == 0)
		return (NULL);
	/* Allocate memory for the array. */
	char *array = malloc(size * sizeof(char));

	/* If memory allocation failed, return NULL */
	if (array == NULL)
		return (NULL);
	/* Initialize each element of the array with the specified character. */
	for (unsigned int idx = 0; idx < size; idx++)
	{
		array[idx] = c;
	}
	/* Return a pointer to the allocated and initialized array. */
	return (array);
}
