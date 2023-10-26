#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: The number to evaluate.
 * @index: The index of the bit to return.
 * Return: The value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Checks if the index is out of range for the size of the number */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* Shifts the number to the right by the index*/
	/*and performs bitwise AND with 1 */
	return ((n >> index) & 1);
}
