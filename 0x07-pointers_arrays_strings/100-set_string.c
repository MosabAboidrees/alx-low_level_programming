#include "main.h"

/**
 * set_string - Set the value of a pointer to a char.
 * @s: A pointer to a pointer to a char.
 * @to: A pointer whose value will be assigned to 's'.
 *
 * Description: This function sets the value of a pointer
 * 's' to a char pointer 'to'. It allows you to change where
 * 's' points to by assigning it the value of 'to'.
 *
 * Return: void (nothing).
*/

void set_string(char **s, char *to)
{
	*s = to;
}
