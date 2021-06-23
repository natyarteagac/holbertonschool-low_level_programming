#include <stdio.h>

/**
* print_to_98 - entry point.
* @n: prints the number required.
* Return: 0.
*/

void print_to_98(int n)
{
	int num;

	if (n < 98)
	{
		for (num = n; num <= 98; num++)
		{
			printf("%d", num);
			if (num == 98)
			{
				break;
			}
			printf(",");
			printf(" ");
		}
	}
	else if (n >= 98)
	{
		for (num = n; num >= 98; num--)
		{
			printf("%d", num);
			if (num == 98)
			{
				break;
			}
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
