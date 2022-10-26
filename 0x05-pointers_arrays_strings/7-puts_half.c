#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, n;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		j = i / 2;

		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		n = (i - 1) / 2;

		while (n < i - 1)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	_putchar('\n');
}
