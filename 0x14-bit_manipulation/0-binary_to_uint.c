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
	int pwr = 1;
	int i = strlen(b) -1;

	if (b == NULL)
	{
		return (0);
	}
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return(0);
		sln += ((b[i] - '0') * pwr);
		pwr *= 2;
		i--;
	}
	return (sln);
}
