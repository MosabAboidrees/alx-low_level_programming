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
	/* return (1) if there are exactly two arguments (argc != 3).*/
	/* else convert the input arguments to integers, then*/
	/* calculate, and print the result and return (0) */
	return ((argc != 3) ? printf("Error\n"), 1 :
		printf("%d\n", atoi(argv[1]) * atoi(argv[2])), 0);
}
