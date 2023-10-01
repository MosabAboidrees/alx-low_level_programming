#include "main.h"

/**
 * check_if_prime - check if a number is prime.
 * @n: The number to check.
 * @i: Iterator for recursion.
 *
 * Description:
 * This function is a recursive helper function for is_prime_number.
 * It iteratively decrements i to check if n is divisible by any positive
 * integer smaller than itself.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int check_if_prime(int n, int i)
{
	return ((i == 1) ? 1 : ((n % i == 0 && i > 0) ? 0 :
				check_if_prime(n, i - 1)));
}

/**
 * is_prime_number -  a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: The number to evaluate for primality.
 *
 * Return: 1 if @n is a prime, 0 if not.
 * If @n is less than or equal to 1, it is not considered prime.
 *
 */
int is_prime_number(int n)
{
	return ((n <= 1) ? 0 : check_if_prime(n, n - 1));
}
