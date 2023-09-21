#include "main.h"

/**
 * is_separator - is used to check if a character is one of
 * the specified word separators (e.g., space, tab,
 * newline, comma, semicolon, etc.).
 * @c: The character to check.
 *
 * Return: 1 if it's a separator, 0 otherwise.
*/

int is_separator(char chr)
{
	char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i] < 12; i++)
	{
		if (chr == separators[i])
			return (1);  /* It's a separator */
	}
	return (0);  /* It's not a separator */
}

/**
 * is_lower - checks if the current character is lowercase letter
 * @c: character to check
 * Return: 1 if character lowercase
 */ 
int is_lower(char chr)
{
	return (chr >= 'a' && chr <= 'z');
}

/**
 * cap_string - a function takes a pointer to a string
 * (char *str) as an argument. It initializes a pointer ptr
 * to point to the same string (the beginning of the string).
 * It also initializes a variable capitalize_next to 1,
 * which indicates whether the next character should be capitalized.
 * @str: The input string to be modified.
 * Return: Pointer to the modified string (same as input).
*/

char *cap_string(char *str)
{
	char *ptr = str; /* Create a pointer to the original string*/
	int capitalize_next = 1; /*Indicates whether the*/
	/*next character should be capitalized*/

	while (*ptr)
	{
		if (is_separator(*ptr))
		{
			/* Set flag to capitalize the next character */
			capitalize_next = 1;
		}
		else if (capitalize_next && is_lower(*ptr))
		{
			/* Capitalize the character */
			*ptr = *ptr - 'a' + 'A';
			/* Reset flag if the character is not a separator */
			capitalize_next = 0;
		}
		/* Check if the current character is a word separator */
		else (is_separator(*ptr))
		{
			/* Reset flag if the character is not a separator */
			capitalize_next = 0;
		}
		ptr++;  /*Move to the next character in the string */
	}
	return (str);  /* Return the modified string */
}
