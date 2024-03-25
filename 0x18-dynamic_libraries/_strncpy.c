#include "main.h"
/**
 * _strncpy - To copies a string.
 *
 * @dest: This is a pointer to the destination buffer
 * where the copied string will be stored.
 * @src: This is a pointer to the source buffer
 * containing the string to be copied.
 * @n: This parameter specifies the maximum number of
 * characters to copy from the source string.
 *
 * Return: pointer @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++) /* copy src to dest */
	{
		dest[b] = src[b]; /* copy src to dest */
	}

	while (b < n) /* add '\0' to remaining dest */
	{
		dest[b] = '\0'; /* null character */
		b++; /* increment b */
	}
	return (dest);
}
