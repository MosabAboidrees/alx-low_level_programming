#include "main.h"

/**
 * leet - Encodes a string into "1337" (leet speak) format.
 *
 * This function takes an input string and replaces specific
 * letters with their corresponding "1337" (leet speak)
 * characters according to the following rules:
 * - 'a' and 'A' are replaced by '4'
 * - 'e' and 'E' are replaced by '3'
 * - 'o' and 'O' are replaced by '0'
 * - 't' and 'T' are replaced by '7'
 * - 'l' and 'L' are replaced by '1'
 *
 * The input string is modified in-place, and the function returns the address
 * of the modified string.
 *
 * @p: The input string to be encoded.
 *
 * Return: Address of the modified string (same as input).
 *
 * By: MOSAB ABOIDREES ALTRAIFI YOUSIF
 * mosab_mahala@yahoo.com
*/

char *leet(char *p)
{
	char *ptr = p;
	char Letters[] = {'A', 'E', 'O', 'T', 'L'};
	char b[] = {4, 3, 0, 7, 1};
	int index;
	int letters_count = sizeof(Letters) / sizeof(Letters[0]);

	while (*p)
	{
		for (index = 0; index < letters_count; index++)
		{
			/* Check if the character matches one of the letters */
			if (*p == Letters[index] || *p == Letters[index] + 32)
			{
				/* Replace the character with it's corresponding lower case */
				*p = b[index] + '0';
				break; /* Exit the loop once a replacement is made */
			}
		}
		p++; /* Move to the next character in the string */
	}
	return (ptr);
}
