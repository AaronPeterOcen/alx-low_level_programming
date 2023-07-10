#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates the array
 *
 * @size:size of the array
 * @c: characters
 * Return: ptr
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		ptr[a] = c;
	}
	return (ptr);
}
