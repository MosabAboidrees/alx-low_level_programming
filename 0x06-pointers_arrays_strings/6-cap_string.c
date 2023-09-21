#include "main.h"

/**
 * cap_string - Capitalizes words in a string
 * based on specified separators.
 * This function takes an input string and
 * capitalizes the first letter of each word in
 * the string. Words are separated by spaces,
 * tabs, newlines, commas, semicolons, periods,
 * exclamation marks, question marks, double quotes,
 * parentheses, curly braces, or any of the specified
 * separators. The input string is modified in-place,
 * and the function returns the address of the
 * modified string.
 *
 * @str: The input string to be modified.
 *
 * Return: Pointer to the modified string (same as input).
 *
 * By: MOSAB ABOIDREES ALTRAIFI YOUSIF
 *
*/

char *cap_string(char *str)
{
	int index = 0;
	int sep_indx;
	char separa[] = " \t\n,;.!?\"(){}";

	for (index = 0; *(str + index) != '\0'; index++)
	{
		/* Check if the character is a lowercase letter before capitalizing it */
		if (*(str + index) >= 'a' && *(str + index) <= 'z')
		{
			/* if it's  null character change its value to capital */
			if index == 0
			{
				*(str + index) -= 'a' - 'A';
			}
			else
			{
				/* cheack for all  separators */
				for (sep_indx = 0; sep_indx <= 12; sep_indx++)
				{
					/* if it's separator change the next charactor's value to capital */
					if (separa[sep_indx] == *(str + index - 1))
					{
						*(str + index) -= 'a' - 'A';
					}
				}
			}
		}
	}
	return (str);  /* Return the modified string */
}
