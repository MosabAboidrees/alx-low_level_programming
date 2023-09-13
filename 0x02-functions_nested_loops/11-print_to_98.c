#include "main.h"
/**
 * print_to_98 -  a function that prints all natural numbers from
 * n to 98, followed by a new line
 *
 * @n: input
 *
 * Return:  number (Success)
 *
*/

void print_to_98(int n)
{
	if (n > 98)
		for (i = n; i > 98; i--)
			printf("%d ", i);
	else
		for (i = n; i < 98; i++)
			printf("%d ", i);
	printf("98\n");
}
