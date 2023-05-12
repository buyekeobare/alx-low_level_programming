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
	int index, multiplication;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; nums < argc; index++)
	{
		multiplication = multiplication * atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}
