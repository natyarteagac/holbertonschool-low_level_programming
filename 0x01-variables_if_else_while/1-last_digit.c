#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
*main - function for entry point
*Return: Always 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	int a = n % 10;
	if (a > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, a);
	}
		else if (a == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, a);
	}
		else if (a < 6)
	{
		printf("Last digit of %i and %i is less than 6 and not 0\n", n, a);
	}

	return (0);
}
