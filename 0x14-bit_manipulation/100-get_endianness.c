#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	int a = 1;
	char *ch = (char *)(&a);

	return (*ch);
}
