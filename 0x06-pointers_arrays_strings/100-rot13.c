#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @src: a string variable
 *
 * Description: this function encodes a string using rot13
 * Return: encoded string
 */

char *rot13(char *src)
{
	int i, j;

	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; src[i] != 0; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (src[i] == data[j])
			{
				src[i] = code[j];
				break;
			}
		}
	}
	return (src);
}
