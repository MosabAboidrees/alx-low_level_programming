#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	while (*s)
		if (*s == '-')  /* if s negative */
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	s++;
	return (num * sign);
}
