#include "main.h"

/**
 * clear_bit -  a function that sets the value of a bit to 0 at a given index
 * @n: The number to modify.
 * @index: The index of the bit to clear.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Checks if the index is out of range for the size of the number */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* Clears the bit at the given index to 0 using bitwise AND */
	*n &= ~(1 << index);
	return (1);
}
