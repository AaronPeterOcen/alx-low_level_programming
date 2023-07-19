#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @c: The number of arguments.
 * @v: The arguments.
 *
 * Description: program prints opcodes in hexadecimal form.
 *
 * Return: 0 on success.
 */
int main(int c, char *v[])
{
	int i = 0, a;

	if (c != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(v[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < a)
	{
		printf("%02hhx", *(unsigned char *)main + 1);
		if(i < a - 1)
		{
			printf(" ");
		}
		else
		{
			printf ("\n");
		}
		i++;
	}
	return (0);
}
