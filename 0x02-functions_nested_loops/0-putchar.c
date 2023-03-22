#include "main.h"

/**
 * main - Entry point
 * Description: main function
 * Return: Always 0 (success)
 */
int main(void)
{
	char *putchar = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(putchar[i]);
	}
	return (0);
}
