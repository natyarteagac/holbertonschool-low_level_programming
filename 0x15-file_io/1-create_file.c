#include "holberton.h"

/**
* create_file - entry point.
* @filename: name of the file.
* @text_content: Null terminated string pointer.
* Return: 1.
*/

int create_file(const char *filename, char *text_content)
{
	int n, w, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	if (text_content != NULL)
	{
		while (text_content[lenght])
		{
			lenght++;
		}
	}

	n = open(filename, O_CREAT | O_TRUNC | O_WRONLY);
		if (n == -1)
			return (-1);

	w = write(n, text_content, lenght);
		if (w == -1)
			return (-1);
	close(n);

	return (1);
}
