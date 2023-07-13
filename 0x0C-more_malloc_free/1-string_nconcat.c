#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l1 = 0, l2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2] && l2 < n)
		l2++;

	ptr = malloc(sizeof(char) * (l1 + l2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		ptr[l1 + i] = s2[i];
	}

	ptr[l1 + i] = '\0';

	return (ptr);
}
