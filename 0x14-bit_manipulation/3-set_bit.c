#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: The number to modify.
 * @index: The index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Checks if the index is out of range for the size of the number */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* Sets the bit at the given index to 1 using bitwise OR */
	*n |= (1 << index);
	return (1);
}
