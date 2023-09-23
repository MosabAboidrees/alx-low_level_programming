#include "main.h"
/**
 * cap_string - a function that takes a pointer to
 * a string chr to capitalize the first letter
 * of each word in the input string.
 * @chr: input string
 * Return: pointer chr
 * By: MOSAB ABOIDREES ALTRAIFI YOUSIF
 * mosab_mahala@yahoo.com
 */
char *cap_string(char *chr)
{
	int idx;

	/* iterates through the input string until it encounters */
	/* the null terminator '\0' (end of the string)*/
	for (idx = 0; chr[idx] != '\0'; idx++)
	{
		/* If lowercase proceeds to the next step.*/
		while (!(chr[idx] >= 97 && chr[idx] <= 122))
			idx++;
		/*If the previous character is a separators*/
		/*(first character of a word) capitalizes it.*/
		if (chr[idx - 1] == ' ' || chr[idx - 1] == '\t' ||
		chr[idx - 1] == '\n' || chr[idx - 1] == ',' ||
		chr[idx - 1] == ';' || chr[idx - 1] == '.' ||
		chr[idx - 1] == '!' || chr[idx - 1] == '?' ||
		chr[idx - 1] == '"' || chr[idx - 1] == '(' ||
		chr[idx - 1] == ')' || chr[idx - 1] == '{' ||
		chr[idx - 1] == '}' || idx == 0)
			if (chr[idx - 1] == '\t')
			{
				chr[idx - 1] = '\t' + 23;
				chr[idx] = chr[idx] - ('a' - 'A');
			}
			else
				chr[idx] = chr[idx] - ('a' - 'A');
	}
	return (chr);
}
