#include "main.h"

/**
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b1, b2;
	int i = 0;
	int dist = 0;
	
	for (; i < (int)(sizeof(n) * 8); i++)
	{
		b1 = n & (1 << i);
		b2 = m & (1 << i);
		if (b1 != b2)
		{
			dist++;
		}
	}
	return (dist);
}
