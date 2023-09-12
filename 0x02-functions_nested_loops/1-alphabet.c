#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: a Prototype function that prints the
 * alphabet a - z stored in @i, in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 *
*/

/* The Prototype function start here*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i); /* print the current charactor*/
	_putchar('\n');
	return (0);
}
