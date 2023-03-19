#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all possible different combinations of three digits.
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, x;

	for (c = 0; c <= 99; c++)
	{
		for (x = c + 1; x <= 99; x++)
		{
			putchar(c / 10 + '0');
			putchar(c % 10 + '0');
			putchar(' ');
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');
			if (c != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
