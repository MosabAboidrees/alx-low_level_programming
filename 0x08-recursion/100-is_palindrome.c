#include "main.h"
/**
 * palindrome_check - Recursively checks if a string is a palindrome.
 * @s: The string to evaluate for palindromicity.
 * @i: Iterator for recursion.
 * @len: Length of the string.
 * Return: 1 if the string is a palindrome, 0 if not.
*/
int palindrome_check(char *s, int i, int len)
{
	return ((*(s + i) != *(s + len - 1)) ? 0 : (i >= len) ? 1 :
	    palindrome_check(s, i + 1, len - 1));
}
/**
 * length_of_str - Returns the length of a string.
 * @s: The string to calculate the length of.
 * Return: The length of the string.
*/
int length_of_str(char *s)
{
	return ((*s == '\0') ? 0 : 1 + length_of_str(s + 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check for palindromicity.
 * Return: 1 if @s is a palindrome (reads the same
 * forwards and backwards), 0 if not.
*/
int is_palindrome(char *s)
{
	return ((*s == '\0') ? 1 : palindrome_check(s, 0, length_of_str(s)));
}
