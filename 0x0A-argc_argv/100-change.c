#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: The number of input arguments.
 * @argv: An array of pointers to the input arguments.
 * Return: 1 If the number of arguments is not exactly 2 or the
 * argument is negative, Otherwise return 0.
*/
int main(int argc, char *argv[])
{
	int cents, numCoins, minCoins, idx;
	int coins[] = {25, 10, 5, 2, 1}; /* Array of coin values */

	/* Check if the number of input arguments is not exactly 2*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1); /*Return error*/
	}
	cents = atoi(argv[1]); /* Convert to an integer*/
	numCoins = sizeof(coins) / sizeof(coins[0]);
	minCoins = 0;
	/* Apply Greedy algorithm to calculate the minimum number of coins */
	while (idx < numCoins && cents >= 0)
	{
		minCoins = minCoins + (cents / coins[idx]);
		cents = cents % coins[idx];
		idx++;
	}
	/* Print the minimum number of coins*/
	printf("%d\n", minCoins);
	return (0);
}
