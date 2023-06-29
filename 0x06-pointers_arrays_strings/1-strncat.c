#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source stringi
 * @n: the string
 *
 * Return: A pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
