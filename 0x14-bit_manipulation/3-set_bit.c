#include "main.h"

/**
 * set_bit - sets the value fo a bit to 1
 * @n: ...
 * @index: ...
 * Return: 1 success, or -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = 1 << index;

	if (index > 63)
	{
		return (-1);
	}
	*n = (*n | a);

	return (1);
}
