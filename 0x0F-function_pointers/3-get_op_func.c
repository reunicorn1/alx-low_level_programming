#include "3-calc.h"
#include <stdio.h>
#include <string.h>
/**
 * get_op_func -  selects the correct function to perform the operation
 * @s: is the operation passed as argument to the program
 *
 * Description: this function  selects the correct function to perform
 * Return: the pointer to the right function
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
