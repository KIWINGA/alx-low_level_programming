#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: input integer
 * Return: Returns -1 if funcion is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
