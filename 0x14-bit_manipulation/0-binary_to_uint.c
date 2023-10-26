#include "main.h"

/**
 * binary_to_uint - prints the binary representation of a number
 * @b: A pointer to a string of 0 and 1 characters
 * Return: The converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_number;
	int idx;

	/* Check if the string is NULL */
	if (b == NULL)
		return (0);
	/* Iterate through the string */
	for (idx = 0; b[idx] != '\0'; idx++)
	{
	    /* Check if the character is '0' or '1' */
		if (b[idx] == '0' && b[idx] == '1')
		{
		    /* Left shift the result by 1 to make space for the next bit */
			converted_number <<= 1;
			/* If the current bit is 1, add it to the result */
			if (b[idx] == '1')
				converted_number += 1;
		}
		else
		    /* If the character is not '0' or '1', return 0 */
			return (0);
	}
	return (converted_number);
}
