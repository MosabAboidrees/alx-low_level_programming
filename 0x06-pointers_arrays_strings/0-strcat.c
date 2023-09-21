#include "main.h"

/**
 * _strcat -  a function that concatenates two strings
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of
 * dest, and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 *
 * @dest: string to append to
 * @src: string to add
 *
 * Return:  a pointer to the resulting string dest
 *
*/

char *_strcat(char *dest, char *src)
{
	int n, m;

	n = 0;
	/*The size of dest array without null byte*/
	while (dest[n] != '\0')
		n++;
	/* Scann src array values*/
	for (m = 0;  src[m] != '\0'; m++)
		dest[n++] = src[m];	/*append src to dest*/

	return (dest);
}
