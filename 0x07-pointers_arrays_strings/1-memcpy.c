#include "main.h"

/**
 * _memcpy -  a function that copies memory area.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Description: This function copies 'n' bytes from the 'src'
 * memory area to the 'dest' memory area.
 *
 * Return: A pointer to the destination memory area 'dest'.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;
	/* Iterate through the memory area 'src' for 'n' times */
	for (idx = 0; idx < n; idx++)
	{
		/* Copy 'src' to 'dest' byte by byte*/
		dest[idx] = src[idx];
	}
	/* Return a pointer to the destination memory area 'dest' */
	return (dest);
}
