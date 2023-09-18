#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements
 * of an array of integer.
 * @a: int to check
 * @n: int to check
 * Return: 0 is success
*/

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
		if (count != (n - 1))
			printf("%d, ", a[count]);
		else
			printf("%d", a[count]);
	printf("\n");
}
