#include "main.h"

/**
 * binary_to_uint - Entry point
 * @b: const char b
 *
 * Return: 0, or the converted number
 */
 unsigned int binary_to_uint(const char *b)
{
	unsigned int sln = 0;
	int i = 0;

	if (b = NULL)
	{
		return (0);
	}
	for (; b[i + 1]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		sln = sln * 2 + (*b - '0');
	}
	return (sln);
}
