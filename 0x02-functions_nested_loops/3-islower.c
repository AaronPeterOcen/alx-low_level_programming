#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase c
 *@c: the character to be checked
 * Return: 1 if c is lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
