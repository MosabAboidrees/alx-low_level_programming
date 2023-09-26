#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to search pointer.
 * @accept: pointer for string containing acceptable bytes.
 *
 * Description: This function searches the string 's' for the first
 * occurrence of any of the bytes in the string 'accept'.
 *
 * Return: A pointer to the byte in 's' that matches one of the bytes in
 * 'accept', or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
	/* Iterate through the string 's' */
	while (*s != '\0')
	{
		/* string 'accept' to check for a match */
		while (*accept != '\0')
		{
			if (*s == *accept;)
			{
				/* Return a pointer to the matching byte in 's' */
				return (s);
			}
			accept++;
		}
		s++; /* Next character in 's' */
	}
	/* If no matching byte is found, return NULL */
	return (0);
}
