#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: Number of input arguments
 * @argv: Array of input argument strings
 * This program prints the opcodes of its own main function.
 * Usage: ./main_opcodes number_of_bytes
 * - number_of_bytes: The number of opcodes to print in hexadecimal
 * Return:
 * - 0 on success
 * - 1 for incorrect number of arguments
 * - 2 for a negative number of bytes
 */

int main(int argc, char *argv[])
{
	int num_bytes;
	char *main_opcodes;

	/*Check for the correct number of command-line arguments*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/*Convert the provided argument to an integer*/
	num_bytes = atoi(argv[1]);
	/*Check if the number of bytes is non-negative*/
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	/*Get the address of the main function and cast it to a character pointer*/
	main_opcodes = (char *)main;
	/*Print the opcodes of the main function*/
	for (int i = 0; i < num_bytes; i++)
	{
		/*Print the opcode in hexadecimal format with a new line*/
		printf("%02hhx%s", main_opcodes[i], (i == num_bytes - 1) ? "\n" : " ");

	}
	return (0);
}
