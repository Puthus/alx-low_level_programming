#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all possible different combinations of two digits.
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, v;

	for (c = '0'; c <= '9'; c++)
	{
		for (v = c + 1; v <= '9'; v++)
		{
			putchar(c);
			putchar(v);
			if (c != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
