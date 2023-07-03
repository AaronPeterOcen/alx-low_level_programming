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
	/*int i;*/
	int *ptr = s;

	while (n > 0)
	{
		s = b;
		ptr++;
		n--;
	}

	return (s);
}
