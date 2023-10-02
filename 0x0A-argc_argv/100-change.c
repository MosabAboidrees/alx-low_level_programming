#include <stdio.h>
#include <stdlib.h>
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
	/* Check if the number of input arguments is not exactly 2*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1); /*Return error*/
	}
	int cents = atoi(argv[1]); /* Convert to an integer*/

	/* Check if the input argument is negative */
	if (cents < 0)
	{
		printf("0\n");
		return (0); /* Return 0 for negative input*/
	}
	int coins[] = {25, 10, 5, 2, 1}; /* Array of coin values */
	int numCoins = sizeof(coins) / sizeof(coins[0]);
	int minCoins = 0;

	/* Apply Greedy algorithm to calculate the minimum number of coins */
	for (int i = 0; i < numCoins && cents >= 0; i++)
	{
		while (cents >= coins[i])
		{
			cents = cents - coins[i];
			minCoins++;
		}
	}
	/* Print the minimum number of coins*/
	printf("%d\n", minCoins);
	return (0);
}
