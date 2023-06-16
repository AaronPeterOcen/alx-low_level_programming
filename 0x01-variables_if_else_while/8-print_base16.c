#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m = 0;

	while (m < 10)
	{
		putchar('0' + m);
		m++;
	}

	m = 'a';

	while (m <= 'f')
	{
		putchar(m);
		m++;
	}
	putchar('\n');

	return (0);
}
