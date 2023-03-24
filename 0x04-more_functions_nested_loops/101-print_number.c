#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int i, j, k, l, m;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
	{
		i = n;
	}
	j = i;
	k = 1;
	while (j > 9)
	{
		j /= 10;
		k *= 10;
	}
	for (l = k; l >= 1; l /= 10)
	{
		m = (i / l) % 10;
		_putchar(m + '0');
	}
}
