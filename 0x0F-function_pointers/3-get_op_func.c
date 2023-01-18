#include "3-calc.h"

/**
 * get_op_func - Selects the right function for operation
 * @s: char for selection
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t opts[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, opts[i].op) == 0)
			return (opts[i].f);
		i++;
	}
	return (0);
}
