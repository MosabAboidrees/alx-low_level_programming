#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar twice
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
