#include "main.h"
#include <stdio.h>

/**
 * ptint_numbers - prints numbers
 * Return: Always 0
 */
void print_numbers(void)
{
	int ch;
	
	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
