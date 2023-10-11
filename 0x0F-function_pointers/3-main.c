#include "3-calc.h"
/**
 * main - Entry point for the calculator program
 * @argc: Number of input arguments
 * @argv: Array of input argument strings
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int num_1, num_2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num_2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = operation(num_1, num_2);
	printf("%d\n", result);
	return (0);
}
