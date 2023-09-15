#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int number = 612852475143;
	long int Largest_PN;
	long int Prime_N;

	/* Firstly devide by 2 which is the smallest prime number */
	while (number % 2 == 0)
		number = number / 2;

	/* Proceed to the next prime number (number must be odd) */
	for (Prime_N = 3; Prime_N <= sqrt(number); Prime_N = Prime_N + 2)
	{
		while (number % Prime_N == 0)
		{
			Largest_PN = Prime_N;
			number = number / Prime_N;
		}
	}
	if (number > 2)
		Largest_PN = number;
	printf("%ld\n", Largest_PN);
	return (0);
}
