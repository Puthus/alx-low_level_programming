#include <stdio.h>

/**
 * main - Entry point
 * Description: Print digits 0 to 9 using ascii code
 * Return: Always 0 (success)
 */

int main(){
	int i = 0;
	for(i=48; i<=57; i++)
		putchar(i);
	putchar('\n');
	return 0;
}
