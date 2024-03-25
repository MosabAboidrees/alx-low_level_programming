#include "main.h"
/**
 * _strcmp - a function named _strcmp that is used to compare
 * two strings (s1 and s2). It returns an integer value based
 * on the comparison result.
 * @s1: This parameter represents the first string to be compared.
 * @s2: This parameter represents the second string to be compared.
 *
 * Return: 0, it means the strings are equal.
 * If r is negative, it means s1 is less than s2 (based on ASCII values).
 * If r is positive, it means s1 is greater than s2 (based on ASCII values).
*/

int _strcmp(char *s1, char *s2)
{
	int chr = 0, r;

	while (s1[chr] != '\0' && s2[chr] != '\0')
	{
		/* If characters are not equal, assign the difference to r */
		if (s1[chr] != s2[chr])
		{
			r = s1[chr] - s2[chr];
			break;
		}
		/* If characters are equal, assign 0 to r */
		else
		{
			r = s1[chr] - s2[chr];
		}
		chr++;
	}
	return (r);
}
