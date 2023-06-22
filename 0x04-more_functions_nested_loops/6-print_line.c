#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line depending on the n value
 * @n: char to be checked
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
