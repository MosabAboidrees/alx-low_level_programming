#include "main.h"

/**
 * string_toupper - Changes all lowercase letters in a string to uppercase.
 * @str: The input string to be modified.
 *
 * Return: Pointer to the modified string (same as input).
 * By: MOSAB ABOIDREES ALTRAIFI YOUSIF
 * mosab_mahala@yahoo.com
*/

char *string_toupper(char *str)
{
	/* (the beginning of the string) */
	char *ptr = str;  /* Create a pointer to the original string */

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			/* Convert lowercase letter to uppercase */
			/* it converts it to uppercase by subtracting */
			/* the ASCII value of 'a' and adding the */
			/* ASCII value of 'A'*/
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;  /* Move to the next character in the string */
	}
	return (str);  /* Return the modified string */
}
