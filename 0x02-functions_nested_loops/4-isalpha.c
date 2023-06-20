#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for lower & upper case "c"
 * @c: The character to be checked
 * Return: 1 for lower or uppercase c or 0 for non
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
