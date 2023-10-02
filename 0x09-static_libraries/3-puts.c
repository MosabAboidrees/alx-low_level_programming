#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: pointer to the string to print
*/

void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
