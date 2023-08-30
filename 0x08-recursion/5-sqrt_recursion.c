#include "main.h"

/**
 * sqrt_guesser - checks if the guess right
 * @min: is a variable of int which is the least probability
 * @n: is the nnumber to be squared
 * @max: is a variable of int which is the highest probability
 *
 * Description: this function returns the natural square root of a number
 * Return: the square root of a number
 */

int sqrt_guesser(int min, int n, int max)
{
	int guess;

	guess = (min + max) / 2;
	if (min > max)
		return (-1);
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (sqrt_guesser(min, n, (guess - 1)));
	else
		return (sqrt_guesser((guess + 1), n, max));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to be squared
 *
 * Description: this function returns the natural square root of a number
 * Return: the square root of a number
 */

int _sqrt_recursion(int n)
{
	return (sqrt_guesser(1, n, n));
}
