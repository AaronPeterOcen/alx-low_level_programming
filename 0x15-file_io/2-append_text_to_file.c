#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the name of the file
 * @text_content: pointer to the string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_desc, num_letters, result_w;

	if (filename == NULL)
	{
		return (-1);
	}
	f_desc = open(filename, O_CREAT | O_WRONLY | O_APPEND);
	if (f_desc == -1)
	{
		return (-1);
	}

	if (text_content)
	{
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
	}
	close(f_desc);
	return (1);
}
