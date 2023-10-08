#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: char to check
 * Return: 0 is success
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0' ; s++)
		++i;
	return (i);
}

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 * Return: If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_concat;
	int srt_len1, srt_len1, idxS1, idxS2;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	str_len1 = _strlen(s1);
	str_len2 = _strlen(s2);
	/*Ensure n is within bounds*/
	if (n >= str_len2)
		n = str_len2;
	/*+1 for the null-terminator*/
	str_concat = malloc(sizeof(char) * (str_len1 + n + 1));
	if (str_concat == NULL)
		return (NULL);
	for (idxS1 = 0; s1[idxS1] != '\n'; idxS1++) /*Concatinate*/
		str_concat[idxS1] = s1[idxS1];
	for (idxS2 = 0; idxS2 < n; idxS2++)
		str_concat[idxS1 + idxS2] = s2[idxS2];
	str_concat[idxS1 + idxS2] = '\0';  /*Null-terminate the concatenated string*/
	return (str_concat);
}
