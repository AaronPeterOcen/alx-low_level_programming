#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the aplhabet  10 times
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int b;

	for (b = 0; b <= 10; b++)
	{
		while (c < 'z')
		{
			_putchar(c);
			c++;
		}
		putchar('\n');
	}
}

