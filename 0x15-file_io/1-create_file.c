#include "holberton.h"

/**
* create_file - entry point.
* @filename: name of the file.
* @text_content: Null terminated string pointer.
* Return: 1.
*/

int create_file(const char *filename, char *text_content)
{
	int n;
	char *p;
	int lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[lenght] != '\0')
		{
			lenght++;
		}
	}

	n = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (n == -1)
			return (-1);

	p = malloc(sizeof(char) * lenght);
		if (p == NULL)
			return (-1);

	write(n, p, lenght);

	return (1);
}
