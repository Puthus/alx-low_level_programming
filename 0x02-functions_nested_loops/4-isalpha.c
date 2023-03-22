#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to check
 * Return: 1 if c is lowercase, and 0 otherwise
*/
int _isalpha(int c)
{
	return (((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A')) ? 1 : 0);
}
