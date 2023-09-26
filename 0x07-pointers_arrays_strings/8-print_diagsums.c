#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: Pointer to the square matrix of integers.
 * @size: The size of the square matrix (number of rows and columns).
 *
 * Description: This function calculates and prints the sum of the
 * two diagonals of a square matrix 'a'. It prints the sum of the
 * main diagonal (from top-left to bottom-right) and the sum of the
 * secondary diagonal (from top-right to bottom-left).
 *
 * Return: void (no return value).
*/

void print_diagsums(int *a, int size)
{
	int main_diago_sum = 0, sec_diago_sum = 0;
	int index;

	/* Calculate the sums of the main diagonal and secondary diagonal */
	for (index = 0; index < size; index++)
	{
		main_diago_sum += a[index * size + index];
		sec_diago_sum += a[index * size + (size - 1 - index)];
	}
	printf("%d, %d\n", main_diago_sum, sec_diago_sum);
}
