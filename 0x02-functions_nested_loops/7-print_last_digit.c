#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @c: the value from which the last digit is from
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int b;

	if (c < 0)
		c = -c;

	b = c % 10;

	if (b < 0)
		b = -b;
	_putchar(b + '0');

	return (b);

}
