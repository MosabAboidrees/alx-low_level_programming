#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers
 * @argc: Number of input arguments
 * @argv: Array of input argument strings
 * Return: 0 (Success) or 1 (Error)
*/
int main(int argc, char *argv[])
{
	int argIdx, charIdx, sum = 0;

	for (argIdx = 1; argIdx < argc; argIdx++)
	{
		for (charIdx = 0; argv[argIdx][charIdx]; charIdx++)
		{
			/*Check if the character is not a digit*/
			(argv[argIdx][charIdx] < '0' || argv[argIdx][charIdx] > '9') ?
				(printf("Error\n"), 1) : 0;
		}
		sum += atoi(argv[argIdx]);
	}
	printf("%d\n", sum);
	return (0);
}
