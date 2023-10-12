#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: 0 if n == , sum otherwise.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int idx;
	int sum = 0;

	va_start(args, n); /*Initialize the argument list variable*/

	if (!n)
		return (0);
	/*access all arguments stored in the va_list */
	for (idx = 0; idx < n; idx++)
	{
		sum += va_arg(args, int);  /*Extract the next argument*/
	}
	va_end(args);  /*Clean up the argument list variable*/
	return (sum);
}
