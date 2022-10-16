#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sums all paramaters
 * @n: number of parameters
 * @...: other parameters
 * Return: Returns all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argSum;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(argSum, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(argSum, int);

	va_end(argSum);
	return (sum);
}
