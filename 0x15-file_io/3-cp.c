#include "main.h"
#define MAXSIZE 1024

/**
 * print_exit - ...
 * @e: ...
 * @s: ...
 * @fdesc: ...
 * Return: 0
 */
int print_exit(int e, char *s, int fdesc)
{
	if (e == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(e);
	}
	else if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(e);
	}
	else if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(e);
	}
	else if (e == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdesc);
		exit(e);
	}
	else
	{
		return (0);
	}
}

/**
 * main - copies the content fo a file to another
 * @argc: arg count
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_in, file_out, rd_stat, wr_stat, shut_in, shut_out;
	char buffer[MAXSIZE];

	if (argc != 3)
	{
		print_exit(97, NULL, 0);
	}
	file_in = open(argv[1],  O_RDONLY);
	if (file_in == -1)
	{
		print_exit(98, argv[1], 0);
	}
	file_out = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_out == -1)
	{
		print_exit(99, argv[2], 0);
	}

	for (; (rd_stat = read(file_in, buffer, MAXSIZE)) != 0;)
	{
		if (rd_stat == -1)
		{
			print_exit(98, argv[1], 0);
		}
		wr_stat = write(file_out, buffer, rd_stat);
		if (wr_stat == -1)
		{
			print_exit(99, argv[2], 0);
		}
	}
	shut_in = close(file_in);
	if (shut_in == -1)
	{
		print_exit(100, NULL, file_in);
	}
	shut_out = close(file_out);
	if (shut_out == -1)
		print_exit(100, NULL, file_out);

	return (0);
}

