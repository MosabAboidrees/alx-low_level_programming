#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @i: is integer type input
 *
 * Return: Always 0 (Success)
 *
*/

int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
