#include <stdio.h>
/**
 * print_buffer - Prints the content of a buffer in a specified format.
 * @buffer: The pointer to the buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
*/
void print_buffer(char *buffer, int size)
{
	int offset = 0;  /*Initialize the offset to 0*/
	int bytesToPrint; /*Initialize to store the number of bytes to print*/

	if (size <= 0)
	{
		printf("\n"); /*If size is 0 or less, print a newline and return*/
		return;
	}
	while (offset < size)
	{
		/*Calculate the number of bytes to print in this iteration*/
		bytesToPrint = (size - offset < 10) ? (size - offset) : 10;
		printf("%08x: ", offset); /*Print the offset in hexadecimal*/
		/* Print hexadecimal content and add spaces for formatting*/
		for (int i = 0; i < 10; i++)
		{
			if (i < bytesToPrint)
				/*Print two hexadecimal digits*/
				printf("%02x", *(buffer + offset + i));
			else
				/*Pad with spaces for incomplete lines*/
				printf("  ");
			if (i % 2)
				printf(" "); /*Add a space every two bytes*/
		}
		/*Print the character representation of the bytes*/
		for (int i = 0; i < bytesToPrint; i++)
		{
			int character = *(buffer + offset + i);

			if (character < 32 || character > 126)
			{
				/* Replace non-printable characters with '.'*/
				character = '.';
			}
			printf("%c", character);
		}
		printf("\n"); /*Move to the next line*/
		offset += 10; /*Increment the offset for the next iteration*/
	}
}
