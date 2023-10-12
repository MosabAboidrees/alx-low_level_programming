#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function.
 * @...: The arguments to print.
 *
 * Description:
 * - 'c' for char
 * - 'i' for integer
 * - 'f' for float
 * - 's' for string (if the string is NULL, print "(nil)")
 * - Ignore other characters.
 * - Print newline at the end.
 */

void print_all(const char * const format, ...)
{
	char *str_sep = "";
	char *str;
	unsigned int idx = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", str_sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", str_sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", str_sep, va_arg(args, double));
				break;
			case 's':
				{
					str = va_arg(args, char *);
					printf("%s", ((str == NULL) ? "(nil)" : str_sep, str));
				}
				break;
			default:
				break;
		}
		str_sep = ", ";
		idx++;
	}
	printf("\n");
	va_end(args);
}
