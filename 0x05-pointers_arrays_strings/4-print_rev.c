#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in rev
 * @s: string pointer
 */
void print_rev(char *s)
{
	int l = strlen(s);
	int i = l - 1;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
