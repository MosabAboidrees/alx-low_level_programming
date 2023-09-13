#include <stdio.h>
#include "main.h"

/**
 * Length_num - length of given number
 *
 * Description: return the length of number
 *
 * @num: operand number
 *
 * Return: leng
*/

int Length_num(int num)
{
	int leng = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		leng += 1;
	}
	return (leng);
}

/**
 * main - Entry point
 *
 * Description: a program that finds and prints the first
 * 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, initial_zeros;
	unsigned long fib_first1 = 1, fib_first2 = 2, sum_first, sum_second = 0;
	unsigned long maxi = 100000000, fib_second1 = 0, fib_second2 = 0;

	for (i = 1; i <= 98; i++)
	{
		if (fib_second1 > 0)
			printf("%lu", fib_second1);
		initial_zeros = Length_num(maxi) - 1 - Length_num(fib_first1);
		while (fib_second1 > 0 && initial_zeros > 0)
		{
			printf("%d", 0);
			initial_zeros--;
		}
		printf("%lu", fib_first1);

		sum_first = (fib_first1 + fib_first2) % maxi;
		sum_second = fib_second1 + fib_second2 + (fib_first1 + fib_first2) / maxi;
		fib_first1 = fib_first2;
		fib_second1 = fib_second2;
		fib_first2 = sum_first;
		fib_second2 = sum_second;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
