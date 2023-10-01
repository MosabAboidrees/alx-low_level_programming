#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: Pointer to the string to be printed in reverse.
 *
 * @s: The string to be printed in reverse.
*/
void _print_rev_recursion(char *s)
{
    /*If we reach the end of the string (null terminator)*/
	if (*s == '\0')
	{
		/* Recursively call the function with the next character*/
		_print_rev_recursion(s + 1);
		/* After the recursive call, print the current character*/
		_putchar(*s);
	}
}
