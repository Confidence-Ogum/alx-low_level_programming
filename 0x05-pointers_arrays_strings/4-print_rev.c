#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to string to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int k, l;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	l = k - 1;

	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
