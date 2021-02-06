#include <stdio.h>

/**
* main - for print a..z lower case
* putchar (z)
* return: always 0.
*/

int main(void)
{

	int z;


	for (z = 'a'; z <= 'z'; z++)

	{
		putchar(z);
	}

	putchar('\n');

	return (0);

}
