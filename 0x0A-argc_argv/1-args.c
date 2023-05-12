#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * Your program should print a number,
 * followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv; /*Ignore argv*/
	return (0);
}

