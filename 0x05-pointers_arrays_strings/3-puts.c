#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string 
 * @str: string pointer
 */
void _puts(char *str)
{
	char *c = str;

	for(; *c != '\0'; c++)
	{
	putchar(*c);
	}

	putchar('\n');
}
