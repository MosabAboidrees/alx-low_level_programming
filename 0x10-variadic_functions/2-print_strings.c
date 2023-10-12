#include "variadic_functions.h"

/**
 * print_strings - Print separated strings, followed by a newline.
 * @separator: The string to be printed between the strings (can be NULL).
 * @n: number of strings.
 * @...: The strings to print.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	char *str;
	va_list args;

	va_start(args, n);
	for (idx = 0; idx < n; idx++)
	{
		str = va_arg(args, char *);  /*next string argument.*/
		printf("%s", ((str == NULL) ? "(nil)" : str));
		/*If it's not NULL and not the last str print the separator.*/
		if (idx < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
