#include "main.h"

/**
 *_memset - function that fills memory with a constant byte
 * @s: pointer char s
 * @b: char b
 * @n: un int n
 * Return: pointer to  s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
