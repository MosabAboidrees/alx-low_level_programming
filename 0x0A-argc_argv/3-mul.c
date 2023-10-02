#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: Number of input arguments
 * @argv: Array of input argument strings
 *
 * Return: 0 (Success) or 1 (Error)
 *
 * By: MOSAB ABOIDREES ALRAIFI YOUISF
 * mosab_mahala@yahoo.com
*/

int main(int argc, char *argv[])
{
	/* check if there are exactly two arguments.*/
	if (argc != 3)
		return printf("Error\n"), 1;
	/* Convert the input arguments to integers, then*/
	/*  calculate, and print the result*/
	int result = atoi(argv[1]) * atoi(argv[2]);

	return printf("%d\n", result), 0;
}
