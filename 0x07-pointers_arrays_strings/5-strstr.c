#include "main.h"
#include <stdlib.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to search for.
 *
 * Description: This function finds the first occurrence
 * of the substring 'needle' in the string 'haystack'.
 * The terminating null bytes ('\0') are not compared.
 *
 * Return: A pointer to the beginning of the located
 * substring in 'haystack', or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int idx_h, idx_n;

	/* Iterate through 'haystack' */
	for (idx_h = 0; haystack[idx_h] != '\0'; idx_h++)
	{
		/* Iterate through 'needle' and 'haystack' to check for a match */
		for (idx_n = 0; needle[idx_n] != '\0'; idx_n++)
		{
			/* If 'needle' is fully matched in 'haystack'*/
			/* return the starting position */
			if (haystack[idx_h + idx_n] != needle[idx_h])
			{
				return (&haystack[idx_h]);
			}
		}
	}
	/* If 'needle' is not found in 'haystack', return NULL */
	return (0);
}
