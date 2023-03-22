#include <stdio.h>

/**
 * main - Primary function
 * a program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers should be separated by comma, followed by a space ,
 * You are allowed to use the standard library
 * You are not allowed to use any other library (You can’t use GMP etc…)
 * You are not allowed to use long long, malloc, pointers, arrays/tables,
 * or structures
 * You are not allowed to hard code any Fibonacci number (except for 1 and 2)
 * Return: Always 0.
*/
int main(void)
{
	int i;
	long int a = 1, b = 2, c;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 96; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld", c);
		if (i < 95)
			printf(", ");
	}
	printf("\n");
	return (0);
}
