#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
