#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int nums, multiplication;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (nums = 1; nums < argc; nums++)
	{
		multiplication = multiplication * atoi(argv[nums]);
	}
	printf("%d\n", multiplication);
	return (0);
}
