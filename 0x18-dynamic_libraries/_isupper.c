#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: character to check
 *
 * Return: 0 if not or 1 if it is uppercase
*/
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
