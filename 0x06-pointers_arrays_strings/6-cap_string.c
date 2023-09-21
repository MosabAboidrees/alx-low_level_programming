#include "main.h"

/**
 * cap_string - Capitalizes words in a string
 * based on specified separators.
 * This function takes an input string and
 * capitalizes the first letter of each word in
 * the string. Words are separated by spaces,
 * tabs, newlines, commas, semicolons, periods,
 * exclamation marks, question marks, double quotes,
 * parentheses, curly braces, or any of the specified
 * separators. The input string is modified in-place,
 * and the function returns the address of the
 * modified string.
 *
 * @str: The input string to be modified.
 * ptr: a pointer to the original string
 * capitalize_next: Indicates whether the
 * next character should be capitalized
 *
 * Return: Pointer to the modified string (same as input).
 *
 * By: MOSAB ABOIDREES ALTRAIFI YOUSIF
 *
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next, index, sep_indx;
	char separa[] = ",;.!?(){}\n\t\" ";

	for (index = 0, capitalize_next = 0; *str != '\0'; index++)
	{
		/* Check if the character is a lowercase letter before capitalizing it */
		if (*str >= 'a' && *str <= 'z')
		{
			/* Set flag to capitalize the next character */
			capitalize_next = 1;
		}
		for (sep_indx = 0; separa[separa] != '\0'; sep_indx++)
		{
			if (separa[y] == *str)
			capitalize_next = 1;
		}
		if (capitalize_next)
		{
			/* Check if the character is a lowercase letter before capitalizing it */
			if (*str >= 'a' && *str <= 'z')
			{
				/* Convert to uppercase by subtracting the ASCII difference */
				*str = *str - ('a' - 'A');
				capitalize_next = 0; /* Reset flag */
			}
			else if
				(*str >= 65 && *str <= 90) ||
				(*str >= 48 && *str <= 57)
				capitalize_next = 0; /* Reset flag */
		}
	}
	return (ptr);  /* Return the modified string */
}
