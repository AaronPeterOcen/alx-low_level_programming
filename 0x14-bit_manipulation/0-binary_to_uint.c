#include "main.h"
#include "string.h"

/**
 * binary_to_uint - converts a binary number to an unsgined
 * @b: onst car b poiner
 *
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sln = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == '1')
			sln = (sln << 1) | 1;
		else if (*b == '0')
			sln <<= 1;
		else
			return (0);
		b++;
	}
	return (sln);
}
