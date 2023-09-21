#include "main.h"
#include <stdio.h>

/**
 * is_separator - is used to check if a character is one of
 * the specified word separators (e.g., space, tab,
 * newline, comma, semicolon, etc.).
 * @chr: The character to check.
 *
 * Return: 1 if it's a separator, 0 otherwise.
*/

int is_separator(char chr)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int index;

	for (index = 0; separators[index] < 13; index++)
	{
		if (chr == separators[index])
			return (1);  /* It's a separator */
	}
	return (0);  /* It's not a separator */
}

/**
 * is_lower - checks if the current character is lowercase letter
 * @ch: character to check
 * Return: 1 if character lowercase
*/
int is_lower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

/**
 * cap_string - a function takes a pointer to a string
 * (char *str) as an argument. It initializes a pointer ptr
 * to point to the same string (the beginning of the string).
 * It also initializes a variable capitalize_next to 1,
 * which indicates whether the next character should be capitalized.
 *
 * @str: The input string to be modified.
 * ptr: pointer to the original string.
 * capitalize_next: Indicates whether the
 * next character should be capitalized.
 *
 * Return: Pointer to the modified string (same as input).
 *
 * By: MOSAB ABOIDREES ALTRAIFI YOUSIF
 * mosab_mahala@yahoo.com
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*str)
	{
		if (is_separator(*str))
		{
			/* Set flag to capitalize the next character */
			capitalize_next = 1;
		}
		else if (capitalize_next && is_lower(*srt))
		{
			/* Capitalize the character */
			*str = *str - 'a' + 'A';
			/* Reset flag if the character is not a separator */
			capitalize_next = 0;
		}
		/* Check if the current character is a word separator */
		else
		{
			(is_separator(*str))
			/* Reset flag if the character is not a separator */
			capitalize_next = 0;
		}
		str++;  /*Move to the next character in the string */
	}
	return (ptr);  /* Return the modified string */
}
