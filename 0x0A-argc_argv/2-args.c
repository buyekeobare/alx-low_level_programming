#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	printf("argc = %d\n", argc);
	printf("Lets print all arguments received in argv[]\n");

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}

