#include "main.h"

/**
 * main - entry point
 *
 * Description: a program that prints the numbers from 1 to 100,
 * But for multiples of three print Fizz instead of the number and
 * for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: always 0
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%i", num);
		if (num < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
