#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase c
 * @c: the char to be checked
 * Return: 1 for uppercase c 0 for none
 */
int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
	{
			return (1);
	}
			else
	{
			return (0);
	}
}

