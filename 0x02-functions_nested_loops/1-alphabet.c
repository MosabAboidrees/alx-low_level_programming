#include "main.h"

/**
 * main - Entry point
 * 
 * Description: _putchar - writes the character c to stdout
 *
 * Return: Always 0 (Success)
 *
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <='z'; i++)
		_putchar(i);
	_putchar('\n');
}
