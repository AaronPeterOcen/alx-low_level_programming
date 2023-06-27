#include "main.h"
#include <stdio.h>

/**
 * print_array - fn that prints array elements
 * @a: array a
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
