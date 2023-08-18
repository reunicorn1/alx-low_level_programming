#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long n = 612852475143;
	int i = 1;
	int j;
	int prime[10];

	prime[0] = 1;

	while (n % 2 == 0)
	{
		prime[i] = 2;
		n = n / 2;
	}
	for (j = 3; j <= sqrt(n); j = j + 2)
	{
		while (n % j == 0)
		{
			i++;
			prime[i] = j;
			n = n / j;
		}
	}
	if (n > 2)
	{
		i++;
		prime[i] = n;
	}
	printf("%d\n", prime[i]);
	return (0);
}
