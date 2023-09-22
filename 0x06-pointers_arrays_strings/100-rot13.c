#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using the ROT13 algorithm.
 * @chr_ptr: Pointer to the string to be encoded.
 *
 * Return: Pointer to the encoded string.
 * By:MOSAB ABOIDREES ALTRAIFI YOUSIF
 * mosab_mahala@yahoo.com
 */

char *rot13(char *chr_ptr)
{
	int idx;
	char ROT13_input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13_output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* Loop through each character in the input string */
	while (*chr_ptr)
	{
		idx = 0;
		/* Iterate through the ROT13 encoding tables */
		while (idx < 52)
		{
			/* Check if the current character matches a character in ROT13_input */
			if (*chr_ptr == ROT13_input[idx])
			{
				/* Replace the character with its ROT13 equivalent */
				*chr_ptr = ROT13_output[idx];
				/* Exit the loop as the character is found and replaced */
				break;
			}
			idx++;
		}
		chr_ptr++;
	}
	/* Return a pointer to the encoded string */
	return (chr_ptr);
}
