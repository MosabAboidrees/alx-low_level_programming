#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @src: string source
 * @dest: string destination
 * @n: intiger length
 * Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	/* size of dest array */
	while (dest[a] != '\0')
	{
		a++;
	}
	/* src does not need to be null-terminated */
	/* if it contains n or more bytes */
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	/*null terminate*/
	dest[a + b] = '\0';
	return (dest);
}
