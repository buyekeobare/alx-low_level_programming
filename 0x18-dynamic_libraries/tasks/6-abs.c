#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @num: the interger to compute absolute valu
  * Return: Always num (Success)
  */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
