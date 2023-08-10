#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Specifying data types as variables */
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	/* Printing the size of each data type */
	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: 4 byte(s)\n", sizeof(e));

	return (0);
}
