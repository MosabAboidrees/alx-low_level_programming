#include "main.h"
#include <stdio.h>
/**
 * is_ASCII_Printable - This function checks if the given
 * ASCII value 'n' represents a printable character within
 * the ASCII range (from 32 to 126).
 * @n: The ASCII value to check.
 * Returns 1 if it's printable, 0 otherwise.
 */
int is_ASCII_Printable(int n)
{
	return (n >= 32 && n <= 126);
}
/**
 * print_Hexadecimal - Prints the hexadecimal representation
 * of bytes in a buffer segment. starting from index
 * 'start' to 'end'. It prints 10 bytes per line.
 * @buffer: The pointer to the buffer.
 * @start: The starting index of bytes to print.
 * @end: The ending index of bytes to print.
 */
void print_Hexadecimal(char *buffer, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(buffer + start + i)); /* Print two hexadecimal digits*/
		else
			printf("  "); /* Pad with spaces for incomplete lines*/
		if (i % 2)
			printf(" "); /* Add a space every two bytes*/
		i++;
	}
}
/**
 * print_ASCII - Prints the ASCII representation of bytes
 * in a buffer segment. Non-printable characters are represented
 * as '.' (period).
 * @buffer: The pointer to the buffer.
 * @start: The starting index of bytes to print.
 * @end: The ending index of bytes to print.
 */
void print_ASCII(char *buffer, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(buffer + i + start);
		if (!is_ASCII_Printable(ch))
			ch = '.'; /*Replace non-printable characters with '.'*/
		printf("%c", ch); /* Print the character*/
		i++;
	}
}
/**
 * print_buffer - This function takes a pointer to a buffer
 * and the number of bytes 'size' to be printed.
 * It prints the content of the buffer in a specific format, with
 * 10 bytes per line, including hexadecimal and ASCII representations.
 * @buffer: The pointer to the buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *buffer, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			if (size - start < 10)
			{
				end = size - start; /*number of bytes to print in this iteration*/
			}
			else
			{
				end = 10;
			}
			printf("%08x: ", start); /*Print the offset in hexadecimal*/
			print_Hexadecimal(buffer, start, end);
			print_ASCII(buffer, start, end);
			printf("\n");
		}
	}
	else
	{
		printf("\n"); /*Print a newline if size is 0 or less*/
	}
}
