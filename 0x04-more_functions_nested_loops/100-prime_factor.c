#include <stdio.h>
#include <math.h>

/**
 * main - main entry
 * The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081
 * Write a program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line
 * Return: 0
 */

int main(void)
{
	long int num = 612852475143;
	long int factor = 2;
	long int largest_factor = 0;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
			largest_factor = factor;
		}
		else
			factor++;
	}

	printf("%ld\n", largest_factor);

	return (0);
}
