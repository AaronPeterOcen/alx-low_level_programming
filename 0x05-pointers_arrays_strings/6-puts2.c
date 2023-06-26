#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every character in  a string starting with the first
 *
 *@str: variable to be checked
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
