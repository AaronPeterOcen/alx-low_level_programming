#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: character to be checked
 *
 * Return: 1 for digit 0 for non digit
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == i)
			return (1);
	}
		return (0);
}
