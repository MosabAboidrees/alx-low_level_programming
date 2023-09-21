#include "main.h"
#include <stdio.h>

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
	int capitalize_next = 1;

		while (*str)
		{
			if (*str == 32 || *str == ',' ||
			*str == ';' || *str == '.' ||
			*str == '!' || *str == '?' ||
			*str == '"' || *str == '(' ||
			*str == ')' || *str == '{' ||
			*str == '}' || *str == '\0' ||
			*str == 9 || *str == '\n')
			{
				/* Set flag to capitalize the next character */
				capitalize_next = 1;
			}
			else if (capitalize_next)
			{
				/* Capitalize the current character */
				*str = *str - ' ';
				capitalize_next = 0; /* Reset flag */
			}
			str++;  /* Move to the next character in the string */
		}
	return (ptr);  /* Return the modified string */
}
