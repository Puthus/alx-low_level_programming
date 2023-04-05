#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 * Return: square root of n
 * If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - finds the square root of a number
 * @n: number to find square root of
 * @i: number to check if it is the square root
 * Return: square root of n
 */

int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (find_sqrt(n, i + 1));
}
