#include "main.h"

/**
 * print_times_table - a function that prints the n times table input
 * starting with 0
 *@n: time table input number
*/

void print_times_table(int n)
{
	int num, mult, products;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				products = num * mult;
				
				if (products <= 9)
					_putchar(' ');
				if (products <= 99)
					_putchar(' ');
				if (products >= 100)
				{
					_putchar((products / 100) + '0');
					_putchar((products / 10) % 10 + '0');
				}
				else if (products <= 99 && products >= 10)
					_putchar((products / 10) + '0');
				_putchar((products % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
