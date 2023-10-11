#include "3-calc.h"

/**
 * get_op_func - function that selects the correct
 * function to perform the operation asked by the user.
 * @s: the operator to pass as an argument.
 * Return: pointer to the function that corresponds to the operator.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int op_idx = 0;

	while (ops[op_idx].op != NULL)
	{
		if (*s == *(ops[op_idx].op) && s[1] == '\0')
			return (ops[op_idx].f);
		op_idx++;
	}
	return (NULL);
}
