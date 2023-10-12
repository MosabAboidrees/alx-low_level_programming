#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: string to print after each numbers (can be NULL).
 * @n: number of integers.
 * @...: The integers to be printed.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	int num;
	va_list args;

	va_start(args, n); /*argument list.*/
	for (idx = 0; idx < n; idx++)
	{
		num = va_arg(args, int);  /* to next integer argument.*/
		printf("%d", num);
		/*If it's not NULL and not the last number print the separator.*/
		if (idx < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
