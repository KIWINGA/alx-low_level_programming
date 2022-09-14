#include "main.h"
/**
 * print_sign - Refer to main.h
 * @n: Input no.
 * Description: prints the sign of a nunber
 * Return: 1 if no. is positive, 0 if 0, -1 if negative
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
