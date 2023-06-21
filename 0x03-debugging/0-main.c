#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - tests function that prints sign of integers
 * positive_or_negative - testing the sign of a number
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		printf("%d is negative \n", n);
	}
	return (0);
}
