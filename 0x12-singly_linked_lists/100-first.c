#include <stdio.h>

/**
 * Entry - before the main function is executed
 * Return: no return
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

