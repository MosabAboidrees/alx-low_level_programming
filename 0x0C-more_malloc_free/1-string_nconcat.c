#include "main.h"
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
	unsigned int str_len1, str_len2, idxS1, idxS2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	/*Calculate the lengths of s1 and s2*/
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	/*Ensure n is within bounds*/
	if (n >= str_len2)
		n = str_len2;
	/*+1 for the null-terminator*/
	str_concat = malloc(str_len1 + n + 1);
	if (str_concat == 0)
		return (0);
	for (idxS1 = 0; idxS1 < str_len1; idxS1++) /*Concatinate*/
		str_concat[idxS1] = s1[idxS1];
	for (idxS2 = 0; idxS2 < n; idxS2++)
		str_concat[idxS1 + idxS2] = s2[idxS2];
	str_concat[idxS1 + idxS2] = '\0';  /*Null-terminate the concatenated string*/
	return (str_concat);
}
