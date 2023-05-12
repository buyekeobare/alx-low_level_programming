#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Write a program that adds positive numbers
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1
 * You can assume that numbers and the addition of all the numbers
 * can be stored in an int
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;
	int j;
	char *str;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			str = argv[i];
			for (j = 0; str[j] != '\0'; j++)
			{
				if (str[j] < '0' || str[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
