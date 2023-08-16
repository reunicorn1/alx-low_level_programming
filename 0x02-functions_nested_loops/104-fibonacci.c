#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int x, y, z;

	printf("1, 2");
	for (i = 0, x = 1, y = 2; i < 96; i++)
	{
		z = x + y;
		printf(", %lu", z);
		x = y;
		y = z;
	}
	printf("\n");
}
