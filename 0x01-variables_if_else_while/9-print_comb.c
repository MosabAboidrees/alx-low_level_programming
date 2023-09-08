#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
