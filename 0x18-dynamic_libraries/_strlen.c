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
