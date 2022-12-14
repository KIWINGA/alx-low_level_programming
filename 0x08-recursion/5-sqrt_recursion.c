#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - retunrs the square root
 * @n: input integer
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}
/**
 * _sqrt - finds square root
 * @prev: previous integer
 * @root: square root value
 * Return: square root result
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
