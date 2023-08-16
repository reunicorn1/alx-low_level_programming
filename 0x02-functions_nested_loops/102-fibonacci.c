#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	long int arr[50];

	arr[0] = 1;
	arr[1] = 2;
	printf("1, 2");
	for (i = 0; i < 48; i++)
	{
		arr[i + 2] = arr[i] + arr[i + 1];
		printf(", %ld", arr[i + 2]);
	}
	printf("\n");
	return (0);
}
