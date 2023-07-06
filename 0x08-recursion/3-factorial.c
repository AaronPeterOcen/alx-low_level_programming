#include "main.h"

/**
 *factorial - returns the factorial of a number n
 * @n: the integer to be found
 * Return: 0 if lower than 0, return -1 to indicate an error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
