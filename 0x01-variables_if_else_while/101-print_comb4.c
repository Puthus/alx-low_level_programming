#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all possible different combinations of three digits.
 * Return: Always 0 (success)
 */
int main(void)
{
	int c,v,x;
	for (c='0'; c<='9'; c++)
	{
		for (v = c + 1; v <= '9'; v++){
			for (x = v +1; x<='9'; x++)
			{
				putchar(c);
				putchar(v);
				putchar(x);
				if (c != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return 0;
}
