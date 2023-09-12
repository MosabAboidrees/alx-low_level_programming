#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 *
 * @c: is the input charactor
 *
 * Return: 1 if @c is lowercase 0 otherwise (Success)
 *
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
