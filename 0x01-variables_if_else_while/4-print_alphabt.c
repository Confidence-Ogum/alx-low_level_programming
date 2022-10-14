#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ac;

	for (ac = 'a'; ac <= 'z'; ac++)
	{
		if (ac == 'e' || ac == 'q')
		{
			continue;
		}
		putchar(ac);
	}
	putchar('\n');
	return (0);
}
