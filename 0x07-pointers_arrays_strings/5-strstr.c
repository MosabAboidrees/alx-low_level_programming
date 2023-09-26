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
	while (*haystack != '\0')
	{
		/* Iterate through 'needle' and 'haystack' to check for a match */
		while (*needle != '\0' && *haystack == *needle)
		{
			*haystack++;
			*needle++;
		}
		/* If 'needle' is fully matched in 'haystack'*/
		/* return the starting position */
		if (*needle == '\0')
		{
			return (haystack);
		}
	}
	/* If 'needle' is not found in 'haystack', return NULL */
	return (0);
}
