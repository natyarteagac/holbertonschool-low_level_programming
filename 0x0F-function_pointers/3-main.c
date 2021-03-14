#include "3-calc.h"

/**
* main - entry point.
* @argc: argument count.
* @argv: argument vector.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*f)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);
	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = f(a, b);
		printf("%d\n", result);

	return (0);
}