#include "main.h"

/**
 * is_prime_number - function to find the prime number
 * @n: the integer n to be found
 * Return: 1 if a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int i;
	
	if (n <= 1)
	{
		return 0;
	}

	if (i == 1)
	{
		return 1;
	}

	if (n % i == 0)
	{
		return 0;
	}

	return is_prime_number(n, i - 1);
}
