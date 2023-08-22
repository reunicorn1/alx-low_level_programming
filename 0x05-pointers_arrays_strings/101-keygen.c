#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Description: this function generates random valid passwords
 * Return: string which is a password
 */

int main(void)
{
	int i, n, sum;
	int pass[100];

	srand(time(NULL));
	/* Set a random number in ann array */
	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum = sum + (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
