#include "main.h"

/**
 * print_number - Prints an integer using only _putchar.
 * @integ: The integer to be printed.
 *
 * Description: This function takes an integer as input and prints it
 * character by character using the _putchar function.
 * It handles negative integers and prints the '-' sign
 * appropriately.
 * By: MOSAB ABOIDREES ALTRAIFI YOUSIF
 * mosab_mahala@yahoo.com
*/

void print_number(int integ)
{
	if (integ < 0)
	{
		_putchar('-'); /* Print '-' for negative numbers */
		integ = -integ;  /* Convert negative number to positive */
	}
	if (integ / 10 != 0)
	{
		print_number(integ / 10); /* Recursive call for digits before the last one */
	}
	_putchar((integ % 10) + '0'); /* Print the last digit as a character */
}
