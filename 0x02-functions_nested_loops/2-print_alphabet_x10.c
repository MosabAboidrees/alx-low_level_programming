#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet, in
 * lowercase, followed by a new line
 *
*/

void print_alphabet_x10(void)
{
	int new_line, i;

	for (new_line = 0; new_line <= 9; new_line++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
