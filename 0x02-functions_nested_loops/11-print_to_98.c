#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers fron n to 98
 * @n: is a variable of int type
 *
 * Description: this function prints all natural numbers fron n to 98
 * Return: this doesn't return anything
 */
void print_to_98(int n)
{
	int x, i;

	/* Definning a variable to get the required number of steps till 98 */
	if (n >= 98)
		i = n - 98;
	else
		i = 98 - n;
	/* a loop printing values until 98 */
	for (x = 0; x <= i; x++)
	{
		if (n + x == 98 || n - x == 98)
		{
			printf("%d", 98);
			printf("\n");
		}
		else
		{
			if (n + x > 98)
				printf("%d, ", n - x);
			else
				printf("%d, ", n + x);
		}
	}
	printf("\n");
}
