#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints a string in rev
 * @s: string pointer
 */
void rev_string(char *s)
{
	/*int c = s;*/
	int lth = strlen(s);
	int mid = lth / 2;
	char tmp;
	int i = 0;

	for (; i < mid; i++)
	{
		tmp = s[i];
		s[i] = s[lth - i - 1];
		s[lth - i - 1] = tmp;
	}
	putchar('\n');
}
