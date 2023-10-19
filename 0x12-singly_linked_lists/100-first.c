#include <stdio.h>

/**
 * premain - Prints a specific string before the main function is executed
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

