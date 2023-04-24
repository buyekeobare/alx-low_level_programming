#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ldc;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldc = n % 10;

	if (ldc > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ldc);
	else if (ldc == 0)
		printf("Last digit of %d is %d and is 0\n", n, ldc);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldc);

	return (0);
}
