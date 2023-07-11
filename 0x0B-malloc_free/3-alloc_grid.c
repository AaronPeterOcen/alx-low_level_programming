#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: widht of the array
 * @height: height of the array
 *
 * Return: ptr
 */
int **alloc_grid(int width, int height)
{
	int a = 0, b;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (; a >= 0; a--)
				free(ptr[a]);

			free(ptr);
			return (NULL);
		}
		for (; b < width; b++)
		{
			ptr[a][b] = 0;
		}
	}
	return (ptr);
}
