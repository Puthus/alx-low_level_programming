#include "main.h"
#include <stdio.h>

/**
 * main - Primary function
 * a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int a = 1, b = 2, c;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld", c);
		if (i < 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
