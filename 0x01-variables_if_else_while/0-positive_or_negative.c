#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Print is dgit positive negative or zero
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ", n);
	if (n < 0)
		printf("negative");
	else if (n > 0)
		printf("positive");
	else
		printf("zero");
	printf("\n");
	return (0);
}
