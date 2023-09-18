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
	int i = 0;

	while (s[i])
		if (s[i] == '-')  /* if s negative */
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + (s[i] - '0');
		else if (num > 0)
			break;
	i++;
	return (num * sign);
}
