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
	if (c >= '0' && c < '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
