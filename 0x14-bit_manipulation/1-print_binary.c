#include "main.h"

/**
 * print_binary - a function that returns the value of a bit at a given index
 * @n: The number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;

	/* Set the mask to the highest bit */
	/*mask is used to isolate the individual bits of the number*/
	/*The line sets mask to a value where only the highest bit is*/
	/*set, which is the leftmost bit in the binary representation.*/
	mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	/* If n is 0, print 0 and return */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* Find the first 1 in the number */
	while ((mask & n) == 0)
		mask >>= 1;
	/* Print the bits from the first 1 found to the end */
	while (mask != 0)
	{
		/*If the result of (n & mask) is true (meaning the bit is set), then the*/
		/*character '1' is printed. If the result of (n & mask) is false*/
		/*(meaning the bit is not set), then the character '0' is printed*/
		_putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}
}
