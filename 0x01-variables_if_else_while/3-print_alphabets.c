#include <stdio.h>
#include <ctype.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
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
	for (ac = 'a'; ac <= 'z'; ac++)
	{
		putchar(toupper(ac));
	}
	putchar('\n');
	return (0);
}
