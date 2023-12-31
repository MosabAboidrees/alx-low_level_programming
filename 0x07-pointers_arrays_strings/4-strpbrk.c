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
	char *acc_ptr;
	int idx_s, idx_acc;

	idx_s = 0;
	/* Iterate through the string 's' */
	while (s[idx_s] != '\0')
	{
		/* string 'accept' to check for a match */
		for (idx_acc = 0; accept[idx_acc] != '\0'; idx_acc++)
		{
			if (s[idx_s] == accept[idx_acc])
			{
				/* Return a pointer to the matching byte in 's' */
				acc_ptr = &s[idx_s];
				return (acc_ptr);
			}
		}
		idx_s++; /* Next character in 's' */
	}
	/* If no matching byte is found, return NULL */
	return (0);
}
