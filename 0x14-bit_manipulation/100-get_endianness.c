#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	/* Create a pointer to the memory address of the integer */
	char *integ = (char *)&x;
	/* Return the integer value of the first byte, representing the endianness */
	return ((int)*integ);
}
