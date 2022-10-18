#include "main.h"
/**
 * _isalpha -  a function that checks for alphabetic character
 * @c: character to check
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	int n = 'A';
	int m;

	while (n <= 'Z')
	{
		if (c == n)
		{
			return (1);
		}
		n++;
	}
	m = 'a';

	while (m <= 'z')
	{
		if (c == m)
		{
			return (1);
		}
		m++;
	}
	return (0);
}

