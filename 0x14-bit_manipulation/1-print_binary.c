#include "main.h"

/**
 * print_binary- prints the binary representation of a number
 * @n: interger n
 *
 * Return: void 
 */
void print_binary(unsigned long int n)
{
	/*int i = 0;*/
	int number = 0;
	unsigned long int now;

	while (n)
	{
		now = n & 1;

		if (now)
		{
			printf("1");
		}
		else if (number)
		{
			printf("0");
		}
		n >>= 1;
	}
	if (!number)
	{
		printf("0");
	}
}

