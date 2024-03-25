#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: Pointer to the string to search.
 * @c: The character to locate.
 *
 * Description: This function searches for the first
 * occurrence of the character 'c' in the string 's'.
 *
 * Return: A pointer to the first occurrence of 'c' in 's' if found,
 * or NULL if 'c' is not found in 's'.
*/

char *_strchr(char *s, char c)
{
	int idx;

	/* Iterate through the string 's' */
	for (idx = 0; s[idx] >= '\0'; idx++)
	{
		/* Check if the current character matches 'c' */
		if (s[idx] == c)
		{
			/* Return a pointer to the current character */
			return (s + idx);
		}
	}
	/* If 'c' is not found, return NULL */
	return ('\0');
}
