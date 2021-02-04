#include <stdlib.h>
#include <time.h>
/**
*How to show positive, negative numbers using statements
*if (n > 0) prints n is positive
*else if (n < 0) prints n is negative
*else is going to print is zero
*Return: Always 0
*/

/*betty style*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive", n);
	}
	else if (n < 0)
	{
		printf("%i is negative", n);
	}
	else
	{
		printf("%i is zero", n);
	}
	return (0);
}
