#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	printf("1 2");
	for (n = 3; n <= 100; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf(" Fizz");
		else if (n % 5 == 0 && !(n % 3 == 0))
			printf(" Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf(" FizzBuzz");
		else
			printf(" %d", n);
	}
	printf("\n");
	return (0);
}
