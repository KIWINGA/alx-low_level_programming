#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sums a and b
 * @a: input integer
 * @b: input integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between a and b
 * @a: input integer
 * @b: input integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a and b
 * @a: input integer
 * @b: input integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns a divided by b
 * @a: input integer
 * @b: input integer
 * Return: result of division of a by b
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
 * op_mod - returns modulus of a and b
 * @a: input integer
 * @b: input integer
 * Return: modulus a % b
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
