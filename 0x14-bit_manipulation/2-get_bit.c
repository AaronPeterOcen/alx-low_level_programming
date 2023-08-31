#include "main.h"

/**
 * get_bit - gets the vaule of a bit at the given index
 * @n: number
 * @index: index of the value
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
