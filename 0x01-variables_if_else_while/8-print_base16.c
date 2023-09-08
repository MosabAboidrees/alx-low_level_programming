#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase, followed
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 48; /*ASCII of zero*/

	while (n <= 102) /* ASCII of f*/
	{
		putchar(n);
		/* after 9 move to 96*/
		if (n == 57)
			n += 39;
		n++;
	{
	putchar('\n');
	return (0);
}
