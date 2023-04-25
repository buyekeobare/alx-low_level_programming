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
	int lr;

	for (lr = 'z'; lr >= 'a'; lr--)
	{
		putchar(lr);
		putchar('\n');
	}
	return (0);
}
