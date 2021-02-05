#include <stdio.h>

/**
 * main - Prints the size of various types based on
 *        the exercise with long, int, short,
 *        long long int and unsigned long.
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of a long: %d byte(s)\n", sizeof(long));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a short: %d byte(s)\n", sizeof(short));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of an unsigned long: %d byte(s)\n", sizeof(unsigned long));

	return (0);
}
