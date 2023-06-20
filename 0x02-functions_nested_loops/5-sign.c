#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints signs of numbers
 *
 * @n: character to be checked
 *
 * Return: 1 if greater than 0, 0 if n is zero, -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar('+' + n);
	}
	else if (n == 0)
	{
		return (0);
		putchar('0' + n);
	}
	else
	{
		return (-1);
		putchar('-' + n);
	}
}
