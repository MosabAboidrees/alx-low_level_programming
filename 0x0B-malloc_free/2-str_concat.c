#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: a newly allocated string pointer containing the
 * concatenated strings,or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1 = 0, len_s2 = 0, idx;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";  /* Treat NULL as an empty string*/
	if (s2 == NULL)
		s2 = "";  /* Treat NULL as an empty string*/
	/* Calculate the lengths of each string*/
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	/* Allocate memory for the concatenated string*/
	concat_str = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	/* If memory allocation failed, return NULL*/
	if (concat_str == NULL)
		return (NULL);
	/* Copy the characters from s1 to the concatenated string*/
	for (idx = 0; idx < len_s1; idx++)
	{
		concat_str[idx] = s1[idx];
	}
	/* Copy the characters from s2 to the concatenated string*/
	for (idx = 0; idx < len_s2; idx++)
	{
		concat_str[len_s1 + idx] = s2[idx];
	}
	/* Add the null-terminator to the end of the concatenated string*/
	concat_str[len_s1 + len_s2] = '\0';
	return (concat_str);  /* Concatenated string pointer*/
}
