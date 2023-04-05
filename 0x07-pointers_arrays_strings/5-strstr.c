#include "main.h"
#include <stddef.h>

/**
 * _strstr - The _strstr() function finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes (\0)
 * are not compared
 * @haystack: string to search
 * @needle: substring to search for
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	int found = 0;

	for (i = 0; haystack[i] != '\0'; i++)
		len1++;
	for (i = 0; needle[i] != '\0'; i++)
		len2++;
	if (len2 == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		found = 1;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				found = 0;
				break;
			}
		}
		if (found == 1)
			return (haystack + i);
	}
	return (NULL);
}
