#include "main.h"
#include <stdio.h>

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
	while (chr[idx] != '\0')
	{
		 /* If lowercase proceeds to the next step.*/
		if (chr[idx] >= 97 && chr[idx] <= 122)
		{
			/* Checks if the current character should be*/
			/* capitalized based on two conditions:*/
			/* 1. If idx is 0 (first character) capitalizes the*/
			/* character by subtracting ' ' from its ASCII value,*/
			/* converting it to uppercase*/
			if (idx == 0)
			{
				chr[idx] = chr[idx] - ('a' - 'A');
			}
			/**
			 * 2. If the previous character is a separators, it
			 * means the current character is the first character
			 * of a word, so it capitalizes it in the same way.
			 * str[idx - 1] is the brevious charactor
			*/
			if (chr[idx - 1] == ' ' || chr[idx - 1] == '\t' ||
			chr[idx - 1] == '\n' || chr[idx - 1] == ',' ||
			chr[idx - 1] == ';' || chr[idx - 1] == '.' ||
			chr[idx - 1] == '!' || chr[idx - 1] == '?' ||
			chr[idx - 1] == '"' || chr[idx - 1] == '(' ||
			chr[idx - 1] == ')' || chr[idx - 1] == '{' ||
			chr[idx - 1] == '}' || chr[idx - 1] == '\0')
			{
				chr[idx] = chr[idx] - ('a' - 'A');
			}
		}
		idx++; /* continues to the next character */
	}
	return (chr);
}
