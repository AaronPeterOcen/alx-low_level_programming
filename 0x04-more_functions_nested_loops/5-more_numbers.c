#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints the numbers 0-14 10 times
 */

void more_numbers(void)
{
	int c;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar(c / 10);
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}

