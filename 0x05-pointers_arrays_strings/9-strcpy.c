#include "main.h"

/**
 * _strcpy - copies string pointed to by src with null type
 * @dest: pointer to destination str
 * @src: pointer to source string
 *
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
