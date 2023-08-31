#include "main.h"

/**
 * print_binary- prints the binary representation of a number
 * @n: interger n
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/*int i = 0;*/
	int number = 0;
	unsigned long int now;

	if (n == 0)
	{
		printf("0");
		return;
	} 
	for (now = n, number = 0; (now >>= 1) > 0; number++)
		;
	for (; number >= 0; number--)
	{
		if ((n >> number) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}

