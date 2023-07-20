#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: format string containing the print types
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *str;
	char *s = "";

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	va_end(list);
	printf("\n");
}
