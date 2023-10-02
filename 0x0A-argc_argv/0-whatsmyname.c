#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: number of input arguments.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	/* Print the program name (including path)*/
	/*followed by a newline if an argument is provided.*/
	printf(argc >= 1 ? "%s\n" : "No input arguments.\n", argv[0]);
	return (0);
}
