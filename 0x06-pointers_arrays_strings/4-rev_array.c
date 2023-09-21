#include "main.h"

/**
 * reverse_array - Reverses the content of an integer array.
 * @a: Pointer to the integer array.
 * @n: Number of elements in the array.
 *
 * By: MOSAB ABOIDREES ALTRAIFI YOUSIF
 * mosab_mahala@yahoo.com
*/

void reverse_array(int *a, int n)
{
	int start = 0;         /* Start index of the array */
	int end = n - 1;       /* End index of the array */
	int temp;

	while (start < end)
	{
		/* Swap the elements at start and end indices */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		/*  Move the indices towards each other */
		start++;
		end--;
	}
}

