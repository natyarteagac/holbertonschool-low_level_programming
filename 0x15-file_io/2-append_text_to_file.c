#include "holberton.h"

/**
* append_text_to_file - entry point.
* @filename: pointer doc.
* @text_content: content of text
* Return: 1 Success.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[lenght] != '\0')
		{
			lenght++;
		}
	}

	o = open(filename, O_APPEND | O_WRONLY, 664);
		if (o == -1)
			return (-1);

	w = write(o, text_content, lenght);
		if (w == -1)
			return (-1);

	close(o);

	return (1);

}
