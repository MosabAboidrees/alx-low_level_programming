#include "main.h"

/**
 * print_number - Prints an integer using only _putchar.
 * @n: The integer to be printed.
 *
 * Description: This function takes an integer as input and prints it
 * character by character using the _putchar function.
 * It handles negative integers and prints the '-' sign
 * appropriately.
 * By: MOSAB ABOIDREES ALTRAIFI YOUSIF
 * mosab_mahala@yahoo.com
*/

void print_number(int n)
{
	unsigned int integ; /* Used for handling negative numbers */

	integ = n;
	if (n < 0)
	{
		_putchar('-'); /* Print '-' for negative numbers */
		integ = -n;  /* Convert negative number to positive */
	}
	if (integ / 10 != 0)
	{
		/* Recursive call for digits before the last one */
		print_number(integ / 10);
	}
	/* Print the last digit as a character */
	_putchar((integ % 10) + '0');
}
