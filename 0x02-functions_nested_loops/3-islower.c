#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: The character to check
 * Return: 1 if c is lowercase, and 0 otherwise
*/
int _islower(int c)
{
	return ((c <= 'z' && c >= 'a') ? 1 : 0);
}
