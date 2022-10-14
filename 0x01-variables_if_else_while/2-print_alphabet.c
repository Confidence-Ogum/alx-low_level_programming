#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ac;

	for (ac = 'a'; ac <= 'z'; ac++)
	{
		putchar(ac);
	}
	putchar('\n');
	return (0);
}
