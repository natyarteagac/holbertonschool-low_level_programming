#include "3-calc.h"

/**
* op_add - entry add.
* @a: first number to calculator.
* @b: second number to calculator.
* Return: first and second number.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - entry point.
* @a: first number to calculator.
* @b: second number to calculator.
* Return: Result of first and second number.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - entry point.
* @a: first number to calculator.
* @b: second number to calculator.
* Return: Result of first and second number.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - entry point.
* @a: first number to calculator.
* @b: second number to calculator.
* Return: Result of first and second number.
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - entry point.
* @a: first number to calculator.
* @b: second number to calculator.
* Return: Result of first and second number.
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
