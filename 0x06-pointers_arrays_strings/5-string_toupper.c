#include "main.h"
#include <string.h>

/**
 * string_toupper - string to upper
 * @c: character c
 * Return: c
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
	}
	return (c);
}
