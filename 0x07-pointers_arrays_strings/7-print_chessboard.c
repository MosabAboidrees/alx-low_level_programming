#include "main.h"

/**
 * print_chessboard - Print a chessboard represented by
 * a 2D array of characters.
 * @a: The 2D array representing the chessboard.
 *
 * Description: This function prints a chessboard
 * represented by the 2D array 'a'. Each character in the
 * array corresponds to a chess piece or an empty space.
 *
 * Return: void (nothing).
*/

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
