#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: Pointer to the string to be printed.
 *
 * @s: string to be printed.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0') /* If we reach the end of the string (null terminator)*/
		_putchar('\n'); /* Print a newline character*/
	_putchar(*s); /*Print the current character*/
	/* Recursively call the function with the next character*/
	_puts_recursion(s + 1);
}
