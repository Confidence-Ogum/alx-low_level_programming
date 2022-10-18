#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ac;

	for (i = 0; i < 10; i++)
	{

		for (ac = 'a'; ac <= 'z'; ac++)
		{
			_putchar(ac);
		}
	_putchar('\n');
	}
}
