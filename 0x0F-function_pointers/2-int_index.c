#include <stddef.h>

/**
 * int_index - a function that searches for an integer.
 * @array: the array to search in.
 * @size: the number of elements in the array.
 * @cmp: a pointer to the comparison function.
 * Return: Index of the first matching element, or -1 if not found.
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int arr_idx;

	if (array != NULL && cmp != NULL)
	{
		for (arr_idx = 0; arr_idx < size; arr_idx++)
		{
			if (cmp(array[arr_idx]) != 0)
			{
				return (arr_idx);
			}
		}
	}
	return (-1);
}
