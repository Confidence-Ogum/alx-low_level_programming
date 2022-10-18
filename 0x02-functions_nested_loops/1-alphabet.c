#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 */
void print_alphabet(void)
{
	char ac;

	for (ac = 'a'; ac <= 'z'; ac++)
	{
		_putchar(ac);
	}
	_putchar('\n');
}



