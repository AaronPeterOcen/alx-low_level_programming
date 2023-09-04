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
	int f_desc;
	char *buffer;
	ssize_t nd, nwr;

	if (filename == NULL)
	{
		return (0);
	}
	f_desc = open(filename, O_RDONLY);

	if (f_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);
	nd = read(f_desc, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nd);

	close(f_desc);

	free(buffer);

	return (nwr);
}
