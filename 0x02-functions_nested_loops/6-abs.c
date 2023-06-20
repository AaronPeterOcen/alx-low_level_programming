#include "main.h"
#include <stdio.h>

/**
 * _abs - checks for the absolute value of an integer
 *
 *@c: interger value for the variable
 * Return: Always 0
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else
	{
		return (-c);
	}
}
