#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaping the values of two integers
 * @a: char a
 * @b: char b
 */
void swap_int(int *a, int *b)
{
	int  c = *a;
	*a = *b;
	*b = c;
}
