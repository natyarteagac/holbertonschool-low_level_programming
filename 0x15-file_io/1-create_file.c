#include "holberton.h"

/**
* create_file - entry point.
* @filename: name of the file.
* @text_content: Null terminated string pointer.
* Return: 1.
*/

int create_file(const char *filename, char *text_content)
{
	int n, b, c;
	char buf[1024];

	if (filename == NULL)
		return (-1);

	while (text_content == NULL)
	{
		n = open(filename, O_CREAT, 0600);

			if (n == -1)
				return (0);
		b = read(n, buf, 1024);
			if (b == -1)
				return (0);
		c = write(n, buf, b);
			if (c == -1)
				return (0);
	}
	return (1);
}
