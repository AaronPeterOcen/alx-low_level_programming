#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers + new line
 * @separator: string to be printed
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);

	while (i < n)
	{
		printf("%d", va_arg(list, int));

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(list);

	printf("\n");
}
