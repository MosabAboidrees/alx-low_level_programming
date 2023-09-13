#include <stdio.h>

/**
 * main - Entry point
 *
 * DEscription:  a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: 0.
*/

int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (i == 49)
			printf("/n");
		else
			printf(", ");
		else
	}
	return (0);
}
