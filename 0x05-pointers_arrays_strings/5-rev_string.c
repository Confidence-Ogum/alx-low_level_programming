#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: pointer to sting to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *t;
	char tmp;

	t = s;

	while (*(t + 1) != '\0')
	{
		t++;
	}

	while (s < t)
	{
		tmp = *s;
		*s = *t;
		*t = tmp;

		s++;
		t--;
	}
}
