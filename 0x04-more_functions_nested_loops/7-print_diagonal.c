#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int Position, Space;

	if (n <= 0)
		_putchar('\n');
	for (Position = 0; Position < n; Position++)
	{
		for (Space = 0; Space < Position; Space++)
		{
			_putchar(' ');
		}
		_putchar('\\'); /* or we can write 92, which is equal to '/' char */
		_putchar('\n');
	}
}
