#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a', m = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
