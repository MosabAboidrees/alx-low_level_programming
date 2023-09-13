#include <stdio.h>
/**
 * main - the main printing funtion
 * Description: a program that finds and prints the sum of the
 * even-valued terms less than 4000000, followed by a new line.
 * Return: 0.
*/

int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum;

	while (1) /* while return 1 do*/
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total_sum);
	return (0);
}
