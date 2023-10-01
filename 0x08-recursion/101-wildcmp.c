#include "main.h"
/**
 * wildcmp -  a function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * @s1: The first input string.
 * @s2: The second input string, which may contain special character '*'.
 *
 * Return: 1 if the strings are identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	return ((*s1 == '\0') ? ((*s2 != '\0' && *s2 == '*') ?
		wildcmp(s1, s2 + 1) : (*s2 == '\0')) :
		(*s2 == '*') ? (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1)) :
		(*s1 == *s2) ? wildcmp(s1 + 1, s2 + 1) : 0);
}
