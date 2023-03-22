#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number of times table to print
 * Return: void
*/
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j > 0)
				_putchar((k > 99 ? (k / 100) + '0' : ' '));
			if (j > 0)
				_putchar((k > 9 ? ((k / 10) % 10) + '0' : ' '));
			_putchar((k % 10) + '0');
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
