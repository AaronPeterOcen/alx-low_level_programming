#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array pointer
 * @size: array size
 * @cmp: function pointer to search for the integer
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp && size > 0)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
		/**
		 * if (size <= 0)
		 * return (-1)
		 */
}
