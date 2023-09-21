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

	b = 0;
	/**
	 * This while loop copies characters from the src
	 * string to the dest string until one of the
	 * following conditions is met:
	 * b reaches the maximum limit n.
	 * A null terminator ('\0') is encountered in the
	 * src string, indicating the end of the source string.
	 * Characters are copied one by one from src to dest.
	*/
	while (b < n && src[b] != '\0')
		dest[b] = src[b];
	b++
	/**
	 * This while loop ensures that the dest string is
	 * null-terminated if the number of characters copied (n)
	 * is less than the size of the destination buffer.
	 * It fills the remaining characters with null terminators.
	*/
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
