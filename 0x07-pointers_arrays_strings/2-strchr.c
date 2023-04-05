#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	if (*s == c)
		return (s);
	if (*s == '\0')
		return (NULL);
	return (_strchr(s + 1, c));
}
