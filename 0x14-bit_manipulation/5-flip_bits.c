#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: ...
 * @m: ...
 *
 * Return: returns number of bit needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b1;
	int i = 0;

	b1 = (sizeof(n) * 8);
	while (b1--)
	{
		i += (n >> b1 & 1) != (m >> b1 & 1);
	}
	return (i);
}
