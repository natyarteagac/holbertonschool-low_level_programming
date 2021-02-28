#include "holberton.h"

/**
* _sqrt_recursion - entry point.
* @n: int pointer.
* Return: sqrt of n.
*/

int _sqrt_recursion(int n)
{
    if (n > 0)
        return get_sqre(n, 1);
    else
        return(-1);
}

/**
* get_sqre - entry point.
* @n: int pointer.
* @a: int pointer.
* Return: Result of sqre.
*/

int get_sqre(int n, int a)
{
    if (a * a == n)
      return(a);
    else if (a * a > n)
      return(-1);
    else
      return get_sqre(n, a + 1);
}
