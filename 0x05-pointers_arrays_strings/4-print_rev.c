#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, followed by a new line
 * @s: string to be printed
*/

void print_rev(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
	{
		leng++;
	}

	while (leng--)
	{
		_putchar(s[leng]);
	}
	_putchar('\n');
}
