#include "3-calc.h"

/**
 *get_op_func - gets argv[2] and compares it to select witch operation to do
 *@s: the operator
 *Return: result of the operation end of program
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	while (ops[i].op != NULL)
	{
		if ((*ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
