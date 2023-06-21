#include <stdio.h>

/**
 * main - program that prints sum of even fibonnaci nums
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0, prev = 0, cur = 1, next;

	while (cur <= 4000000)
	{
		if (cur % 2 == 0)
		{
			sum += cur;
		}
		next = prev + cur;
		prev = cur;
		cur = next;
	}

	printf("%d\n", sum);
	return (0);
}
