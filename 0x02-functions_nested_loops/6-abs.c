#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: number is positive or negative
 *
 * Return: int
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n >= 0)
	{
		return (n);
	}
	return (0);
}

