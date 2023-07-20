#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed
 * @n: number of strings passed to the fn
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	while (i < n)
	{
		char *st = va_arg(list, char *);

		if (st == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", st);
		}

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
