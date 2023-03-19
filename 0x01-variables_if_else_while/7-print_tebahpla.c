#include <stdio.h>
/**
 * main - Entry point
 * Description: Print alphabets reversed
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
