#include "main.h"

/**
 * _pow_recursion -  a function that returns the value of
 * x raised to the power of y using recursion.
 * @x: The base number.
 * @y: The exponent.
 * Return: The result of x raised to the power of y.
 * If y is negative, return -1 to indicate an error.
*/

int _pow_recursion(int x, int y)
{
	/* If y is negative, return -1 to indicate an error */
	/* If y is 0, return 1 (x^0 = 1) */
	/* Recursive case: Calculate x^y using recursion */
	/* Calculate x^(y-1) recursively */
	return ((y < 0) ? -1 : (y == 0) ? 1 : x * _pow_recursion(x, y - 1));
}
