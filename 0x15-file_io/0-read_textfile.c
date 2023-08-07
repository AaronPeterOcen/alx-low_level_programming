#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: ...pointer to the file name
 * @letters: ...letters read and printed
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int of = open(filename, O_RDONLY);
	char *storeb;
	ssize_t readb;
	ssize_t writeb;

	if (!filename)
	{
		return (0);
	}
	/**
	 * of;
	 */

	if (of == -1)
	{
		return (0);
	}

	storeb = malloc(sizeof(char) * letters);
	if (!storeb)
	{
		close(of);
		return (0);
	}

	readb = read(of, storeb, letters);
	writeb = write(STDOUT_FILENO, storeb, readb);

	close(of);
	free(storeb);
	return (writeb);
}
