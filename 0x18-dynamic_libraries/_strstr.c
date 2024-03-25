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
	/* Iterate through 'haystack' */
	for (; *haystack != '\0'; haystack++)
	{
		char *h_ptr = haystack;
		char *n_ptr = needle;

		/* Iterate through 'needle' and 'haystack' to check for a match */
		while (*h_ptr == *n_ptr && *n_ptr != '\0')
		{
			h_ptr++;
			n_ptr++;
		}
		/* If 'needle' is found in 'haystack', return haystack */
		if (*n_ptr == '\0')
		{
			return (haystack);
		}
	}
	/* If 'needle' is not found in 'haystack', return NULL */
	return (0);
}
