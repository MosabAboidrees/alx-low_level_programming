#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: Pointer to the string to calculate the length of.
 *
 * Return: The length of the string.
*/

int _strlen_recursion(char *s)
{
	/*If we reach the end of the string (null terminator)*/
	if (*s == '\0')
		return (0); /*Return 0 to indicate the end of the string*/
	/* Recursively call the function with the next character*/
	/* and add 1 to the result to count the current character*/
	return (1 + _strlen_recursion(s + 1));
}
