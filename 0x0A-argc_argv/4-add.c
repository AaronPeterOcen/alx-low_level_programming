#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two positive nums
 * @argc: arg v count
 * @argv: arguments v
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b;
	int sum = 0;
	char *C;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; argv[a]; a++)
	{
		b = strtol(argv[a], &C, 10);
		if (*C)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += b;
	}
	printf("%d\n", sum);

	return (0);
}
