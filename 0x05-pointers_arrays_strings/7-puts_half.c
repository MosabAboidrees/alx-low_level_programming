#include "main.h"
/**
 * puts_half - a function that prints half of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
*/

void puts_half(char *str)
{
	int leng = 0;

	while (str[leng] != '\0')
		leng++;
	leng++;

	for (leng /= 2; str[leng] != '\0'; leng++)
		_putchar(str[leng]);
	_putchar('\n');
}
