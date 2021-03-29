#include "holberton.h"

/**
* read_textfile - entry point.
* @filename: pointer to document.
* @letters: Size of document.
* Return: Number of letters.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	char *p;
	int b;
	int c;

	if (filename == NULL)
		return (0);

	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);

	p = malloc(letters * sizeof(char));
	if (p == NULL)
		return (0);

	b = read(n, p, letters);
	if (b == -1)
		return (0);

	c = write(STDOUT_FILENO, p, b);
	if (c == -1)
		return (0);
	free(p);
	close(n);

	return (c);
}
