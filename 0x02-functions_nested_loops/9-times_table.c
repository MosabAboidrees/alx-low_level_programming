#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 *
 * Return:  (Success)
 *
*/

void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		for (column = 0; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');

			product = row * column;
			/* If is single number put space */
			/* If is two numbers put first digit */
			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0'); /* First digit */
			_putchar((product % 10) + '0'); /* Second digit */
		}
		_putchar('\n');
	}
}
