#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string str
 *
 * Return: ptr
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	ptr = malloc(len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}


