#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (check_palindrome(s, len));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: string to check
 * @len: length of string
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != *(s + len - 1))
		return (0);
	return (check_palindrome(s + 1, len - 2));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to count
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
