#include "main.h"
/**
 * _islower -  a function that checks for lowercase character.
 * @c: character to check
 * Return: 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	int n = 'a';

	while (n <= 'z')
	{
		if (c == n)
		{
			return (1);
		}
		n++;
	}
	return (0);
}
