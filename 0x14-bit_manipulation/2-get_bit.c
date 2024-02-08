#include"main.h"
/**
* get_bit - progrom returns the value of a bit at a given index.
* @n: number to check bits
* @index: index at which to check bit
*
* Return: value of the bit, or -1 for error
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int num, verify;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
num = 1 << index;
verify = n & num;
if (verify == num)
return (1);
return (0);
}
