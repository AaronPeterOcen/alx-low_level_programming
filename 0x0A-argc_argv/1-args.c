#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument v count
 * @argv: arguments v
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/*
	 * int i;
	 * for (i = 0; i < argc; i++)
	 * {
	 * printf("%s", argv[i])
	 * }
	 * printf("\n");
	*/

	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
