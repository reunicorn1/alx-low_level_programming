#include "main.h"

/**
 * infinite_add -  adds two numbers
 * @n1: is a variable of string of numbers
 * @n2: is a variable of string of numbers
 * @r: is the bugger that store result
 * @size_r: is the buffer size
 *
 * Description: this function adds two numbers
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int s1, s2, i, j, k, l, num1, num2, tem, space;

        s1 = 0;
        s2 = 0;
        while (n1[s1] != '\0')
                s1++;
        while (n2[s2] != '\0')
                s2++;

        i = s1 - 1;
        j = s2 - 1;
        space = 0;
        for (k = size_r - 1; i >= -1 || j >= -1; i--, j--, k--)
        {
                num1 = (i >= 0) ? (n1[i] - '0') : 0;
                num2 = (j >= 0) ? (n2[j] - '0') : 0;
                tem = (num1 + num2 + space) % 10;
                r[k] = tem + 48;
                space = (num1 + num2 + space) / 10;
        }

        if (space > 0 && k >= 0)
        {
                 r[k] = space + '0';
                 return (r);
        }

        if (k < 0)
                return (0);

        for (l = 0; l < size_r - k; l++)
                r[l] = r[k + 1 + l];
        r[l] = '\0';

        return (r);
}
