#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Create a program that generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum;
	char i;

	srand(time(NULL));
	for (sum = 0; sum <= 100; sum++)
	{
		i = rand() % 128;
		sum += i;
		putchar(i);
	}
	putchar(2772 - sum);
	return (0);
}
