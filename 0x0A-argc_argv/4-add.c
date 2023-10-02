#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_positive_number - Check if a a positive number
 * @str: String to check
 * Return: 1 means not positive number or not digit, 0 otherwise
*/
int is_positive_number(char *str)
{
	if (*str == '-')
		return (1); /* Negative numbers are not allowed*/
	while (*str)
	{
		if (!isdigit(*str))
			return (1); /*Non-digit not allowed*/
		str++;
	}
	return (0);
}
/**
 * main - a program that adds positive numbers
 * @argc: Number of input arguments
 * @argv: Array of input argument strings
 * Return: 0 (Success) or 1 (Error)
*/
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1) /* Check if no numbers are passed*/
		printf("0\n");
		return (0);
	for (int i = 1; i < argc; i++)
	{
		/* Check if input argument is a positive number,*/
		/*then, calculate the sum of positive numbers */
		is_positive_number(argv[i]) ? (sum += atoi(argv[i])) :
			return (printf("Error\n"), 1);
	}
	printf("%d\n", sum);
	return (0);
}
