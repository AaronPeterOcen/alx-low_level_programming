#include <string.h>
#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array of integers
 * @n:the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
