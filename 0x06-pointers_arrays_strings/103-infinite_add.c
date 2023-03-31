#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = len1 > len2 ? len1 : len2;

	if (max_len + 1 > size_r)
	{
		return (0);
	}
	r[max_len + 1] = '\0';
	for (i = 0; i < max_len; i++)
	{
		int digit1 = i < len1 ? n1[len1 - 1 - i] - '0' : 0;
		int digit2 = i < len2 ? n2[len2 - 1 - i] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[max_len - i] = '0' + (sum % 10);
	}
	if (carry)
	{
		r[0] = '0' + carry;
		return (r);
	}
	else
		return (r + 1);
}
