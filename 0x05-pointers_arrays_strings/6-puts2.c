#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every character in  a string starting with the first
 *
 * @str - variable to be checked
 */
void puts2(char *str)
{
	int l = strlen(str);
	int i;

	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			printf("%d",i);
	}
	putchar('\n');
}
