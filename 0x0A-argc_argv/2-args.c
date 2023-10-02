#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: Number of input arguments
 * @argv: Array of argument strings
 *
 * Return: 0 (Success)
 * By: MOSAB ABOIDREES ALTRAIFI YOUSIF
 * mosab_mahala@yahoo.com
*/

int main(int argc, char *argv[])
{
	int argv_idx;

	for (argv_idx = 0; argv_idx < argc; argv_idx++)
	{
		printf("%s\n", argv[argv_idx]);
	}
	return (0);
}
