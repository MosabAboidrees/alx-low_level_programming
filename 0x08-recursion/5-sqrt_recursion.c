#include "main.h"

/**
 * sq_root_recursion - Recursively compute the square root of a number.
 * @n: The number to calculate the square root of.
 * @i: Iterator for recursion.
 *
 * Description:
 * It iteratively increments i to calculate the square root of n.
 *
 * @n: The number to calculate the square root of.
 * @i: Iterator for recursion.
 *
 * Return: The resulting square root,
 * or -1 if there is no natural square root.
*/

int sq_root_recursion(int n, int i)
{
	/* If i*i exceeds n, there is no natural square root */
	/* If i*i equal n, the  natural square root found*/
	/* Continue recursion to search for the square root */
	return ((i * i > n) ? -1 : (i * i == n) ? i :
			sq_root_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The resulting square root, or -1 if @n is negative.
*/

int _sqrt_recursion(int n)
{
	/* If n is negative, there is no square root */
	/* If n positive, Start recursion to find the square root */
	return ((n < 0) ? -1 : sq_root_recursion(n, 0));
}
