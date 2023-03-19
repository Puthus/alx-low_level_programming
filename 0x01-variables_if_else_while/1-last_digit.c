#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - Entry point
 * Description: Print last digit and conditional text 
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if(n % 10 > 5)	
		printf("and is greater than 5");
	else if(n % 10 == 0)
		printf("and is 0");
	else
		printf("and is lesser than 6 and not 0");
	printf("\n");
	return (0);
}