#include"main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
*/

void print_number(int n)
{
	unsigned int num = n;

	/* if its negative */
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/* partion the number evry time and send it to */
	/* print_number fuction recursively */
	/*print the first few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*print the last digit*/
	_putchar((num % 10) + 48);
}
