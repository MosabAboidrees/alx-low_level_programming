#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers
 * @argc: Number of input arguments
 * @argv: Array of input argument strings
 * Return: 0 (Success) or 1 (Error)
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int argumentIndex, charIndex, sum = 0;

	for (argumentIndex = 1; argumentIndex < argc; argumentIndex++)
	{
		for (charIndex = 0; argv[argumentIndex][charIndex]; charIndex++)
		{
			char currentChar = argv[argumentIndex][charIndex];

			/*Check if the character is not a digit*/
			(currentChar < '0' || currentChar > '9') ? (printf("Error\n"), exit(1)) : 0;
		}
		sum += atoi(argv[argumentIndex]);
	}
	printf("%d\n", sum);
	return (0);
}
