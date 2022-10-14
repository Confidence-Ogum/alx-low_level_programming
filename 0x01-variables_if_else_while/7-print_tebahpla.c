#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ac;

	for (ac = 'z'; ac >= 'a'; ac--)
	{
		putchar(ac);
	}
	putchar('\n');
	return (0);
}
