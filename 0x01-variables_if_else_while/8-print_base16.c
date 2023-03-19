#include <stdio.h>
/**
 * main - Entry point
 * Description: Print alphabets reversed
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	for (c='0'; c<='9'; c++)
		putchar(c);	
	for (c='a'; c<='f'; c++)
		putchar(c);	
	putchar('\n');
	return 0;
}
