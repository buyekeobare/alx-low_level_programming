#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lw, e, q;

	e = 'e';
	q = 'q';

	for (lw = 'a'; lw <= 'z'; lw++)
	if (lw != e && lw != q)
	putchar (lw);
	putchar ('\n');	
	return (0);
}
