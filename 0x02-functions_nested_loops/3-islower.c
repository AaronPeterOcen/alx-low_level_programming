#include "main.h"
#include <stdio.h>

/**
 * _islower(int c) - checks for lowercase c
 */
int _islower(int c)
{
	char b = 'c';

	while (c >= 'a' && c <= 'z')
	{
		if (c == b)
		{
			return (1);
		} else
		{
			return (0);
		}
	c++;
	}
	return (0);
}
