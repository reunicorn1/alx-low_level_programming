#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - a simple calculator
 * @argc: the argument counter
 * @argv: the argument vector
 * Return: the answer
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*f)(int, int);
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	opr = argv[2];
	if (!(strcmp(opr, "+") == 0 ||
			strcmp(opr, "*") == 0 ||
			strcmp(opr, "/") == 0 ||
			strcmp(opr, "%") == 0 ||
			strcmp(opr, "-") == 0))
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(opr, "/") == 0 || strcmp(opr, "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(opr);
	result = f(a, b);
	printf("%d\n", result);
	return (0);

}
