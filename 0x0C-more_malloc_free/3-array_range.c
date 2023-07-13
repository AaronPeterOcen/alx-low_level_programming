#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: max value of the arrat
 *
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int s, i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	s = max - min + 1;
	ptr = malloc(s * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
