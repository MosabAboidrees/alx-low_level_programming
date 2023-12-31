#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
*/

void rev_string(char *s)
{
	char tmp;
	int i, leng;

	i = 0;
	leng = 0;

	while (s[leng] != '\0')
	{
		leng++;
	}

	for (i = 0; i < leng / 2; i++)
	{
		tmp = s[i];
		s[i] = s[leng - 1 - i]; /* leng - 1: the array start from 0 */
		s[leng - 1 - i] = tmp;
	}
}
