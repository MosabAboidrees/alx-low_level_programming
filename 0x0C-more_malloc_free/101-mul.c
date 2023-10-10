#include "main.h"

/**
 * _isdigit - Function to check if a string consists of digits.
 * @s: string to check.
 * Return: 1 if composed of digits, 0 otherwise.
 */
int _isdigit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}
/**
 * multiply - Multiplies two numbers represented as strings.
 * @digit1: The first number.
 * @digit2: The second number.
 * Return: result as a string.
 */
char *multiply(char *digit1, char *digit2)
{
	int lenD1 = 0, lenD2 = 0, i, j, carry, multip;
	char *result;
	char *error_message;

	/*Calculate the lengths of the input numbers*/
	while (digit1[lenD1])
		lenD1++;
	while (digit2[lenD2])
		lenD2++;
	result = malloc(lenD1 + lenD2 + 1); /*Allocate memory for the result*/
	if (result == NULL)
	{
		error_message = "Error";
		while (*error_message)
		{
			_putchar(*error_message);
			error_message++;
		}
		_putchar('\n');
		exit(98);
	}
	/*Initialize the result with zerose*/
	for (i = 0; i < lenD1 + lenD2; i++)
		result[i] = '0';
	result[i] = '\0';
	/*Perform multiplication*/
	for (i = lenD1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = lenD2 - 1; j >= 0; j--)
		{
			/*Multiply and add to the previous product*/
			multip = (digit1[i] - '0') * (digit2[j] - '0') + carry
				+ (result[i + j + 1] - '0');
			carry = multip / 10;
			result[i + j + 1] = (multip % 10) + '0';
		}
		result[i + j + 1] = carry + '0';
	}
	return (result);
}

int main(int argc, char *argv[])
{
	char *multip;
	char *tem;
	int i;
	char *error_message;

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		error_message = "Error";
		while (*error_message)
		{
			_putchar(*error_message);
			error_message++;
		}
		_putchar('\n');
		return (98);
	}
	multip = multiply(argv[1], argv[2]);
	/* Store the original pointer */
	tem = multip;
	/*Skip leading zeros in the result*/
	while (*multip == '0' && *(multip + 1) != '\0')
		multip++;
	/*Iterate through the characters and print them*/
	for (i = 0; multip[i] != '\0'; i++)
	{
		_putchar(multip[i]);
	}
	_putchar('\n');
	free(tem);
	return (0);
}
