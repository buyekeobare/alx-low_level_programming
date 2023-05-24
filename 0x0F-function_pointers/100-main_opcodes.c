#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int size, j;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (j = 0; j < size; j++)
	{
		if (j == size - 1)
		{
			printf("%02hhx\n", ar[j]);
			break;
		}
		printf("%02hhx ", ar[j]);
	}
	return (0);
}

