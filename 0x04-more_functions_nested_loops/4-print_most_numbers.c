#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - printing numbers 0-9 without 2 & 4
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a!= 4)
			_putchar('0'+ a);
	}
	_putchar('\n');
}
