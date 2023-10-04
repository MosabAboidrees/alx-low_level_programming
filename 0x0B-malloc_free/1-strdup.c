#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: The string to duplicate.
 *
 * Return: A pointer to a newly allocated duplicate string,
 * or NULL if str = NULL or if memory allocation fails.
*/

char *_strdup(char *str)
{
	unsigned int str_len = 0;
	unsigned int idx;
	char *dupl_str;  /*pointer for the duplicated string.*/

	if (str == NULL)
		return (NULL);  /*Return NULL if str is NULL.*/
	/* Compute the length of the input string */
	while (str[str_len] != '\0')
		str_len++;
	/* Allocate memory for the duplicated string. */
	dupl_str = malloc((str_len + 1) * sizeof(char));
	/* Check if memory allocation failed, and return NULL if so. */
	if (dupl_str == NULL)
		return (NULL);
	/* Copy the characters from the input string to the duplicated string. */
	for (idx = 0; idx <= str_len; idx++)
	{
		dupl_str[idx] = str[idx];
	}
	return (dupl_str);
}

