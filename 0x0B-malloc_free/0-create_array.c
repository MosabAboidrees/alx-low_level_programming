#include <stdlib.h>
#include "main.h"

/**
 * create_array -  a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 * Return: Returns NULL if size = 0, or memory allocation fails.
*/
char *create_array(unsigned int size, char c)
{
	char *ptr_arr;
	unsigned int idx;

	/* If size is 0, return NULL */
	if (size == 0)
		return (NULL);
	/* Allocate memory for the array. */
	ptr_arr = (char *) malloc(size * sizeof(char));

	/* If memory allocation failed, return NULL */
	if (ptr_arr == NULL)
		return (NULL);
	/* Initialize each element of the array with the specified character. */
	for (unsigned int idx = 0; idx < size; idx++)
	{
		ptr_arr[idx] = c;
	}
	/* Return a pointer to the allocated and initialized array. */
	return (ptr_arr);
}
