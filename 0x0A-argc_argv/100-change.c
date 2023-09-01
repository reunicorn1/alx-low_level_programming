#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int n, quarters, dimes, nickels, coin, pennies;

	quarters = 0;
	dimes = 0;
	nickels = 0;
	coin = 0;
	pennies = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	if (n >= 25)
	{
		quarters = n / 25;
		n = n % 25;
	}
	if (n >= 10 && n < 25)
	{
		dimes = n / 10;
		n = n % 10;
	}
	if (n >= 5 && n < 10)
	{
		nickels = n / 5;
		n = n % 5;
	}
	if (n >= 2 && n < 5)
	{
		coin = n / 2;
		n = n % 2;
	}
	if (n == 1)
		pennies = n;

	printf("%d\n", quarters + dimes + nickels + coin + pennies);
	return (0);
}
