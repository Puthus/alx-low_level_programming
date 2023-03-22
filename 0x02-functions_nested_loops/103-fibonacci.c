#include <stdio.h>

/**
 * main - Primary function
 * Each new term in the Fibonacci sequence is generated by adding the previous
 * two terms. By starting with 1 and 2, the first 10 terms will be:
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the
 * Fibonacci sequence whose values do not exceed 4,000,000, this is a
 * program that finds and prints the sum of the even-valued terms,
 * followed by a new line.
 * Return: Always 0.
*/
int main(void)
{
	int i;
	long int a = 1, b = 2, c = 3, sum = 2;

	for (i = 0; c < 4000000; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%ld\n", sum);
	return (0);
}
