#include "main.h"

/**
 * _strchr - function to locate the character in the string
 * @s: string s
 * @c: char c
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
