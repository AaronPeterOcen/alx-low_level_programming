#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename:pointer to the file name
 * @text_content:pointer to a string
 *
 * Return:1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f_desc, num_letters, result_w;

	if (filename == NULL)
	{
		return (-1);
	}

	f_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f_desc == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	num_letters = 0;
	while (text_content[num_letters])
	{
		num_letters++;
	}
	result_w = write(f_desc, text_content, num_letters);
	if (result_w == -1)
	{
		close(f_desc);
		return (-1);
	}
	close(f_desc);
	return (1);
}
