#include "main.h"
/**
 * _pow_recursion - prints value of x raised tot he pwoer of y
 * @x: base integer
 * @y: exponent integer
 * Return: -1 if y is lower than 0, otherwise return value
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
