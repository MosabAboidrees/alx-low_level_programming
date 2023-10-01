#include "main.h"

/**
 * factorial - a function that returns the factorial of
 * a given number using recursion.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of @n, or -1 if @n is negative (error case).
*/

int factorial(int n)
{
	/* Check if n is negative and return -1 if true, else continue */
	return ((n < 0) ? -1 : ((n == 0 || n == 1) ? 1 : n * factorial(n - 1)));
}
