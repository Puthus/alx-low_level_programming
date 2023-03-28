#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: 0
 */

#define PASSWORD_LENGTH 100

int main(void)
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1] = {0};
	int total = 0;
	int i = 0;
	int iterations = 0;

	while (total != 2772)
	{
		while (total < 2772)
		{
			password[i] = (rand() % 95) + ' ';
			total += password[i];
			i++;
		}
		if (total - 2772 > 0 && total - 2772 < 95)
			for (int j = 0; j < i; j++)
			{
				for (int k = 32; k < 127; k++)
				{
					if (password[j] - k == total - 2772)
					{
						total -= password[j];
						password[j] = k;
						total += password[j];
						break;
					}
				}
				if (total == 2772)
				{
					printf("%s", password);
					return (0);
				}
			}
		if (total != 2772)
		{
			srand(time(NULL) + iterations++);
			total = 0;
			for (i = i + 1; i > 0; i--)
			{
				password[i] = 0;
			}
		}
	}
	printf("%s", password);
	return (0);
}
