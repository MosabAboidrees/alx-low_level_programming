#include <stddef.h>

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array.
 * @array: the array to be processed
 * @size: the size of the array
 * @action: a pointer to the function to be executed on each element
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (size_t idx = 0; idx < size; idx++)
		{
			action(array[idx]);
		}
	}
}
