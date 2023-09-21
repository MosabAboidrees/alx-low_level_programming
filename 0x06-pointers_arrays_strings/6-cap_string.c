#include "main.h"
#include <stdio.h>

/**
 * is_lower - checks if the current character is lowercase letter
 * @ch: character to check
 * Return: 1 if character lowercase
*/

int is_lower(char ch)
{
	/* Check if the character is a lowercase letter before capitalizing it */
	if (ch >= 'a' && ch <= 'z')
		/* Convert to uppercase by subtracting the ASCII difference */
		ch = ch - ('a' - 'A');
	return (1);
}

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
			if (*str == ' ' || *str == ',' ||
			*str == ';' || *str == '.' ||
			*str == '!' || *str == '?' ||
			*str == '"' || *str == '(' ||
			*str == ')' || *str == '{' ||
			*str == '}' || *str == '\0' ||
			*str == '\t')
			{
				/* Set flag to capitalize the next character */
				capitalize_next = 1;
			}
			else if (capitalize_next && is_lower(*str))
			{
				/* Capitalize the current character */
				*str = *str - 32;
				capitalize_next = 0; /* Reset flag */
			}
			str++;  /* Move to the next character in the string */
		}
	return (ptr);  /* Return the modified string */
}
