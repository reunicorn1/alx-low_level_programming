#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	long int sum;
	long int arr[50];

	arr[0] = 1;
	arr[1] = 2;
	/* Formation of the values of the array */
	for (i = 0; i < 48; i++)
	{
		arr[i + 2] = arr[i] + arr[i + 2];
	}
	/* adding the even values less than 4 million */
	for (j = 0, sum = 0; j < 50; j++)
	{
		if (arr[j] < 4000000 && arr[j] % 2 == 0)
			sum += arr[j];
	}
	printf("%ld\n", sum);
	return (0);
}
