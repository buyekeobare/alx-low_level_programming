#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
* is_digit - checks if a string contains a non-digit char
* @str: string to be evaluated
* Return: 0 if a non-digit is found, 1 otherwise
*/
int is_digit(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] < '0' || str[i] > '9')
return (0);
i++;
}
return (1);
}
/**
* _strlen - returns the length of a string
* @str: string to evaluate
* Return: the length of the string
*/
int _strlen(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}
/**
* errors - handles errors for main
*/
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: always 0 (Success)
*/
int main(int argc, char *argv[])
{
char *s1, *s2;
int num1, num2, num, i, carry, digit1, digit2, *sum, a = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
num1 = _strlen(s1);
num2 = _strlen(s2);
num = num1 + num2 + 1;
sum = malloc(sizeof(int) * num);
if (!sum)
return (1);
for (i = 0; i <= num1 + num2; i++)
sum[i] = 0;
for (num1 = num1 - 1; num1 >= 0; num1--)
{
digit1 = s1[num1] - '0';
carry = 0;
for (num2 = _strlen(s2) - 1; num2 >= 0; num2--)
{
digit2 = s2[num2] - '0';
carry += sum[num1 + num2 + 1] + (digit1 *digit2);
sum[num1 + num2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
sum[num1 + num2 + 1] += carry;
}
for (i = 0; i < num - 1; i++)
{
if (sum[i])
a = 1;
if (a)
_putchar(sum[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(sum);
return (0);
}
