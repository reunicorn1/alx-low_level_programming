#include <stdio.h>

/**
 * main - Entry point
 * starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int x, y, z, x1, x2, y1, y2, z1, z2;

	printf("1, 2");
	for (i = 0, x = 1, y = 2; i < 90; i++)
	{
		z = x + y;
		printf(", %lu", z);
		x = y;
		y = z;
	}
	x1 = x / 1000000000;
	x2 = x % 1000000000;
	y1 = y / 1000000000;
	y2 = y % 1000000000;
	for (i = 91; i < 96; i++)
	{
		z1 = x1 + y1;
		z2 = x2 + y2;
		printf(", %lu", z1 + (z2 / 1000000000));
		printf("%lu", z2 % 1000000000);
		x1 = y1;
		x2 = y2;
		y1 = z1;
		y2 = z2;
	}
	printf("\n");
	return (0);
}
