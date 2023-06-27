#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int l = strlen(str);
	int s = 0;
	int i;

	if (l % 2 == 0)
	{
		s = l / 2;
	}
	else
	{
		s = (l - 1) / 2;
	}

	for (i = s; i < l; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
