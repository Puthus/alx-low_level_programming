#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to print the last digit of
 * Return: the value of the last digit
*/
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
