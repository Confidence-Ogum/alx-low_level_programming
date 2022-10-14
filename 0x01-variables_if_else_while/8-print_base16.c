#include <stdio.h>
/**
 * main - a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ac;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (ac = 'a'; ac <= 'f'; ac++)
	{
		putchar(ac);
	}
	putchar('\n');
	return (0);
}
