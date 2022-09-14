#include "main.h"
/**
 * print_last_digit - Refer to main
 * @d: Integer input
 * Description: Prints the last digit of a number
 * Return: last number of a digit
 */
int print_last_digit(int d)
{
	int r;

	if (d < 0)
		r = -1 * (d % 10);
	else
		r = d % 10;

	_putchar((r % 10) + '0');
	return (r % 10);
}
