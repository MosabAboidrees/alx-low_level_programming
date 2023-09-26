#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing acceptable characters.
 *
 * Description: This function calculates the length of the initial segment of
 * the string 's' which consists only of characters that are present in the
 * string 'accept'.
 *
 * Return: The number of bytes in the initial segment of 's' consisting only
 * of characters from 'accept'.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found, idx_acc, idx_s;

	/* Iterate through the string 's' */
	for (idx_s = 0; s[idx_s] != '\0'; idx_s++)
	{
		/* Iterate through the string 'accept' to check for a match */
		/* Increment idx_acc for matching character */
		for (idx_acc = 0; s[idx_s] != accept[idx_acc]; idx_acc++)
		{
			if (accept[idx_acc] == '\0')
				return (idx_acc);
		}
	}
	return (idx_acc);
}
