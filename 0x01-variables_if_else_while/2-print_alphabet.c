#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet lowercase letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	for (ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
